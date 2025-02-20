#pragma once

#include "cCar.h"
#include "cTrain.h"
#include "cTruck.h"
#include "cBird.h"
#include "cDinosaur.h"

#include "cStone.h"
#include "cCoin.h"

class cObjectFactory
{
public:
	static cMovableObject* create(cObject::ecType movableObjectType, ecDirection direction, ecColor color, int x, int y, int step);
	static cFixedObject* create(cObject::ecType fixedObjectType, ecColor color, int x, int y);
};