#ifndef MAZE3DBOOLEANARRAY_H
#define MAZE3DBOOLEANARRAY_H

#include <string>

#include "position.h"
#include "size.h"
#include "maze3d.h"
#include "cellinfo.h"

class Maze3DBooleanArray : Maze3D {
	
private:
	bool*** itsMazeArray;
	Position itsStartPosition;
	Position itsEndPosition;
	
public:
	Maze3DBooleanArray(Size size);
	
	bool generateActual(std::string script);
	
	CellInfo getCellAtPosition(Position pos);
	CellInfo getStartCell();
	CellInfo getEndCell();
	
};

#endif