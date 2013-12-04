#include "size.h"

Size::Size(int x, int y, int z) {
	itsX = x;
	itsY = y;
	itsZ = z;
}

int Size::getX() {
	return itsX;
}
int Size::getY() {
	return itsY;
}
int Size::getZ() {
	return itsZ;
}
