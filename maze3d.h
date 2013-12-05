#ifndef MAZE3D_H
#define MAZE3D_H

#include <string>

#include "size.h"
#include "cellinfo.h"

class Maze3D {
	
private:
	Size itsSize;
	
public:
	Maze3D(Size size);
	
	Size getSize();
	
	static Maze3D* generate(std::string script);
	static Maze3D* generateFromFile(std::string file);
	virtual bool generateActual(std::string script) = 0;
	
	static Maze3D* load(std::string file);
	bool save(std::string file);
	
	virtual CellInfo getCellAtPosition(Position pos) = 0;
	virtual CellInfo getStartCell() = 0;
	virtual CellInfo getEndCell() = 0;
	
};

#endif // MAZE3D_H