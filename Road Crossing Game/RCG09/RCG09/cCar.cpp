#include "cCar.h"

cCar::cCar(ecDirection direction, ecColor color, unsigned int x, unsigned int y) : cVehicle(cCar::N, direction, color, x, y)
{
	if (direction == ecDirection::RIGHT)
	{
		this->Shapes[0] = char(32);
		this->Shapes[1] = char(220);
		this->Shapes[2] = char(219);
		this->Shapes[3] = char(219);
		this->Shapes[4] = char(220);
	}
	else if (direction == ecDirection::LEFT)
	{
		this->Shapes[0] = char(220);
		this->Shapes[1] = char(219);
		this->Shapes[2] = char(219);
		this->Shapes[3] = char(220);
		this->Shapes[4] = char(32);
	}
	else
		throw;
}

void cCar::draw(unsigned int leftLimit, unsigned int rightLimit)
{
	text_color(this->Color);
		
	for (int i = 0; i < cCar::N; i++)
	{
		goto_xy(this->X[i], this->Y[i]);
		if (this->X[i] > leftLimit && this->X[i] < rightLimit)
			cout << this->Shapes[i];
	}

	text_color();
	goto_xy(0, 0);
}

void cCar::move(unsigned int leftLimit, unsigned int rightLimit)
{
	if (this->Direction == ecDirection::RIGHT)
	{
		for (int i = 0; i < cCar::N; i++)
		{
			if (++this->X[i] == rightLimit)
				this->X[i] = leftLimit + 1;
		}
	}
	else if (this->Direction == ecDirection::LEFT)
	{
		for (int i = 0; i < cCar::N; i++)
		{
			if (--this->X[i] == leftLimit)
				this->X[i] = rightLimit - 1;
		}
	}
	else
		throw;

	this->draw(leftLimit, rightLimit);
}