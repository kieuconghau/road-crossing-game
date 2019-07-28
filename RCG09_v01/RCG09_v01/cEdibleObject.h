#pragma once

#include "cFixedObject.h"

enum class eatState
{
	AVAILABLE,
	UNAVAILABLE,
};

class cEdibleObject : public cFixedObject
{
public:
	cEdibleObject(cObject::ecType objectType, int n, ecDirection direction, ecColor color, int x, int y);
	virtual ~cEdibleObject();

public:
	virtual bool impact_xcor(int x) = 0;
	virtual void draw(int leftLimit, int rightLimit) = 0;

private:

protected:

};

