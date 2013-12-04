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

Position Position::getAdjacentXNeg() {
	return Position(itsX, itsY, itsZ);
}
Position Position::getAdjacentXPos() {
	return Position(itsX, itsY, itsZ);
}
Position Position::getAdjacentYNeg() {
	return Position(itsX, itsY, itsZ);
}
Position Position::getAdjacentYPos() {
	return Position(itsX, itsY, itsZ);
}
Position Position::getAdjacentZNeg() {
	return Position(itsX, itsY, itsZ);
}
Position Position::getAdjacentZPos() {
	return Position(itsX, itsY, itsZ);
}