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

Position Position::getAdjacent(Direction dir) {
	switch (dir) {
		case XNEG:
			return this->getAdjacentXNeg();
		case XPOS:
			return this->getAdjacentXPos();
		case YNEG:
			return this->getAdjacentYNeg();
		case YPOS:
			return this->getAdjacentYPos();
		case ZNEG:
			return this->getAdjacentZNeg();
		case ZPOS:
			return this->getAdjacentZPos();
		default:
			break;
	}
}
Position Position::getAdjacentXNeg() {
	return Position(itsX - 1, itsY, itsZ);
}
Position Position::getAdjacentXPos() {
	return Position(itsX + 1, itsY, itsZ);
}
Position Position::getAdjacentYNeg() {
	return Position(itsX, itsY - 1, itsZ);
}
Position Position::getAdjacentYPos() {
	return Position(itsX, itsY + 1, itsZ);
}
Position Position::getAdjacentZNeg() {
	return Position(itsX, itsY, itsZ - 1);
}
Position Position::getAdjacentZPos() {
	return Position(itsX, itsY, itsZ + 1);
}