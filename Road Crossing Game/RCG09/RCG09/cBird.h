#pragma once

#include "Graphic.h"
#include "cAnimal.h"

class cBird : public cAnimal
{
public:
	cBird(ecDirection direction, ecColor color, unsigned int x, unsigned int y);
	void draw(unsigned int leftLimit, unsigned int rightLimit);
	void move(unsigned int leftLimit, unsigned int rightLimit);

private:
	static const unsigned int N = 5;
	static const char Shapes[cBird::N];
};
