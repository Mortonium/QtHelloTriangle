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

bool hasValidAdjacent(Direction dir, Size size) {
	switch (dir) {
		case XNEG:
			return this->hasValidAdjacentXNeg(size);
		case XPOS:
			return this->hasValidAdjacentXPos(size);
		case YNEG:
			return this->hasValidAdjacentYNeg(size);
		case YPOS:
			return this->hasValidAdjacentYPos(size);
		case ZNEG:
			return this->hasValidAdjacentZNeg(size);
		case ZPOS:
			return this->hasValidAdjacentZPos(size);
		default:
			break;
	}
}
bool hasValidAdjacentXNeg(Size size) {
	return itsX > 0;
}
bool hasValidAdjacentXPos(Size size) {
	return itsX < (size.getX() - 1);
}
bool hasValidAdjacentYNeg(Size size) {
	return itsY > 0;
}
bool hasValidAdjacentYPos(Size size) {
	return itsY < (size.getY() - 1);
}
bool hasValidAdjacentZNeg(Size size) {
	return itsZ > 0;
}
bool hasValidAdjacentZPos(Size size) {
	return itsZ < (size.getZ() - 1);
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