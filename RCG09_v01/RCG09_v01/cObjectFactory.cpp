#include "cObjectFactory.h"

cMovableObject* cObjectFactory::create(cObject::ecType movableObjectType, ecDirection direction, ecColor color, int x, int y, int step, int crazyStep)
{
	switch (movableObjectType)
	{
	case cObject::ecType::MV_CAR:
		return new cCar(direction, color, x, y, step, crazyStep);
	case cObject::ecType::MV_TRUCK:
		return new cTruck(direction, color, x, y, step, crazyStep);
	case cObject::ecType::MV_TRAIN:
		return new cTrain(direction, color, x, y, step, crazyStep);
	case cObject::ecType::MA_BIRD:
		return new cBird(direction, color, x, y, step, crazyStep);
	case cObject::ecType::MA_DINOSAUR:
		return new cDinosaur(direction, color, x, y, step, crazyStep);
	case cObject::ecType::MF_WOOD:
		return new cWood(direction, color, x, y, step, crazyStep);
	default:
		throw;
	}

	return nullptr;
}

cFixedObject* cObjectFactory::create(cObject::ecType fixedObjectType, ecDirection direction, ecColor color, int x, int y)
{
	switch (fixedObjectType)
	{
	case cObject::ecType::FE_COIN:
		return new cCoin(direction, color, x, y);
	case cObject::ecType::FI_STONE:
		return new cStone(direction, color, x, y);
	default:
		break;
	}

	return nullptr;
}