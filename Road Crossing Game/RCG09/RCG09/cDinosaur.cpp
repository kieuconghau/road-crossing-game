#include "cDinosaur.h"

const char cDinosaur::Shapes[cDinosaur::N] = { char(32), char(254), char(220), char(219), char(223) };

cDinosaur::cDinosaur(ecDirection direction, ecColor color, unsigned int x, unsigned int y) : cAnimal(cDinosaur::N, direction, color, x, y) { }

void cDinosaur::draw(unsigned int leftLimit, unsigned int rightLimit)
{
	text_color(this->Color);

	for (int i = 0; i < cDinosaur::N; i++)
	{
		goto_xy(this->X[i], this->Y[i]);
		if (this->X[i] > leftLimit && this->X[i] < rightLimit)
			cout << this->Shapes[cDinosaur::N - i - 1];
	}

	text_color();
	goto_xy(0, 0);
}

void cDinosaur::move(unsigned int leftLimit, unsigned int rightLimit)
{
	if (this->Direction == ecDirection::RIGHT)
	{
		for (int i = 0; i < cDinosaur::N; i++)
		{
			if (++this->X[i] == rightLimit)
				this->X[i] = leftLimit + 1;
		}
	}
	else if (this->Direction == ecDirection::LEFT)
	{
		for (int i = 0; i < cDinosaur::N; i++)
		{
			if (--this->X[i] == leftLimit)
				this->X[i] = rightLimit - 1;
		}
	}
	else
		throw;

	this->draw(leftLimit, rightLimit);
}