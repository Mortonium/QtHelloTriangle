#ifndef CELLINFO_H
#define CELLINFO_H

#include "Direction.h"
#include "position.h"

class CellInfo {
	
private:
	Position itsPosition;
	bool itsCanTravel[7];
	
public:
	CellInfo(Position pos, bool filled, bool canTravelXNeg, bool canTravelXPos, bool canTravelYNeg, bool canTravelYPos, bool canTravelZNeg, bool canTravelZPos);
	
	Position getPosition();
	
	bool canTravel(Direction dir);
	bool canTravel();
	bool canTravelXNeg();
	bool canTravelXPos();
	bool canTravelYNeg();
	bool canTravelYPos();
	bool canTravelZNeg();
	bool canTravelZPos();
	
};

#endif // CELLINFO_H