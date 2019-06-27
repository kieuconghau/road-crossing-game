#pragma once

#include "Graphic.h"
#include "cVehicle.h"

class cCar : public cVehicle
{
public:
	static const unsigned int N = 5;
	cCar(ecDirection direction, ecColor color, unsigned int x, unsigned int y);
	void draw(unsigned int leftLimit, unsigned int rightLimit);
	void move(unsigned int leftLimit, unsigned int rightLimit);

private:
	char Shapes[cCar::N];
};
