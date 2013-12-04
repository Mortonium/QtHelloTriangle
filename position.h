#ifndef POSITION_H
#define POSITION_H

class Position {

private:
	int itsX;
	int itsY;
	int itsZ;

public:
	Position(int x, int y, int z);

	int getX();
	int getY();
	int getZ();

};

#endif // POSITION_H
