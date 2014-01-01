#include "size.h"

Size::Size(int x, int y, int z) {
	
	if (x > 1)
		itsX = x;
	else
		itsX = 1;
	
	if (y > 1)
		itsY = y;
	else
		itsY = 1;
	
	if (z > 1)
		itsZ = z;
	else
		itsZ = 1;
	
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
