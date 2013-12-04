#include "position.h"

Position::Position(int x, int y, int z) {
	itsX = x;
	itsY = y;
	itsZ = z;
}

int Position::getX() {
	return itsX;
}
int Position::getY() {
	return itsY;
}
int Position::getZ() {
	return itsZ;
}

