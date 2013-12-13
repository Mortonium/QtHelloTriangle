#include "maze3d.h"
#include "maze3dbooleanarray.h"

Maze3D::Maze3D(Size size) : itsSize(size) {
	
}

Size Maze3D::getSize() {
	return itsSize;
}

Maze3D* Maze3D::generate(std::string script) {
	
}
Maze3D* Maze3D::generateFromFile(std::string file) {
	
}
Maze3D* Maze3D::generateTestMaze() {
	Maze3DBooleanArray* maze = new Maze3DBooleanArray(Size(5, 5, 5));
	maze->generateTestMaze();
	return (Maze3D*)maze;
}

Maze3D* Maze3D::load(std::string file) {
	
}
bool Maze3D::save(std::string file) {
	
}