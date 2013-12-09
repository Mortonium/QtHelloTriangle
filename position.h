#ifndef POSITION_H
#define POSITION_H

#include "Direction.h"

class Position {

private:
	int itsX;
	int itsY;
	int itsZ;

public:
	Position(int x, int y, int z);

	int getX();
	int getY();
	int getZ();

	bool hasValidAdjacent(Direction dir, Size size);
	bool hasValidAdjacentXNeg(Size size);
	bool hasValidAdjacentXPos(Size size);
	bool hasValidAdjacentYNeg(Size size);
	bool hasValidAdjacentYPos(Size size);
	bool hasValidAdjacentZNeg(Size size);
	bool hasValidAdjacentZPos(Size size);
	
	Position getAdjacent(Direction dir);
	Position getAdjacentXNeg();
	Position getAdjacentXPos();
	Position getAdjacentYNeg();
	Position getAdjacentYPos();
	Position getAdjacentZNeg();
	Position getAdjacentZPos();

};

#endif // POSITION_H