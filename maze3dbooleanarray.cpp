#include "maze3dbooleanarray.h"

Maze3DBooleanArray::Maze3DBooleanArray(Size size) : Maze3D(size), itsStartPosition(0, 0, 0), itsEndPosition(0, 0, 0) {
	itsMazeArray = new bool**[size.getX()];
	for(int i = 0; i < size.getX(); i++) {
		itsMazeArray[i] = new bool*[size.getY()];
		for (int j = 0; j < size.getY(); j++) {
			itsMazeArray[i][j] = new bool[size.getZ()];
			for (int k = 0; k < size.getZ(); k++) {
				itsMazeArray[i][j][k] = false;
			}
		}
	}
}

bool Maze3DBooleanArray::generateActual(std::string script) {
	
}
void Maze3DBooleanArray::generateTestMaze() {
	if ((getSize().getX() == 5) && (getSize().getY() == 5) && (getSize().getZ() == 5)) {
		itsMazeArray[1][1][1] = true;
		itsMazeArray[2][1][1] = true;
		itsMazeArray[3][1][1] = true;
		
		itsMazeArray[1][2][1] = true;
		itsMazeArray[3][2][1] = true;
		
		itsMazeArray[1][3][1] = true;
		itsMazeArray[2][3][1] = true;
		itsMazeArray[3][3][1] = true;
	}
}

CellInfo Maze3DBooleanArray::getCellAtPosition(Position pos) {
	
	bool filled = itsMazeArray[pos.getX(), pos.getY(), pos.getZ()];
	
	bool canTravelXNeg = pos.hasValidAdjacentXNeg(getSize());
	if (canTravelXNeg) {
		Position posAdj = pos.getAdjacentXNeg();
		canTravelXNeg = itsMazeArray[posAdj.getX()][posAdj.getY()][posAdj.getZ()];
	}
	
	bool canTravelXPos = pos.hasValidAdjacentXPos(getSize());
	if (canTravelXPos) {
		Position posAdj = pos.getAdjacentXPos();
		canTravelXPos = itsMazeArray[posAdj.getX()][posAdj.getY()][posAdj.getZ()];
	}
	
	bool canTravelYNeg = pos.hasValidAdjacentYNeg(getSize());
	if (canTravelYNeg) {
		Position posAdj = pos.getAdjacentYNeg();
		canTravelYNeg = itsMazeArray[posAdj.getX()][posAdj.getY()][posAdj.getZ()];
	}
	
	bool canTravelYPos = pos.hasValidAdjacentYPos(getSize());
	if (canTravelYPos) {
		Position posAdj = pos.getAdjacentYPos();
		canTravelYPos = itsMazeArray[posAdj.getX()][posAdj.getY()][posAdj.getZ()];
	}
	
	bool canTravelZNeg = pos.hasValidAdjacentZNeg(getSize());
	if (canTravelZNeg) {
		Position posAdj = pos.getAdjacentZNeg();
		canTravelZNeg = itsMazeArray[posAdj.getX()][posAdj.getY()][posAdj.getZ()];
	}
	
	bool canTravelZPos = pos.hasValidAdjacentZPos(getSize());
	if (canTravelZPos) {
		Position posAdj = pos.getAdjacentZPos();
		canTravelZPos = itsMazeArray[posAdj.getX()][posAdj.getY()][posAdj.getZ()];
	}
	
	CellInfo info(pos, filled, canTravelXNeg, canTravelXPos, canTravelYNeg, canTravelYPos, canTravelZNeg, canTravelZPos);
	return info;
	
}
CellInfo Maze3DBooleanArray::getStartCell() {
	return this->getCellAtPosition(itsStartPosition);
}
CellInfo Maze3DBooleanArray::getEndCell() {
	return this->getCellAtPosition(itsEndPosition);
}