#ifndef SIZE_H
#define SIZE_H

class Size {

private:
	int itsX;
	int itsY;
	int itsZ;

public:
	Size(int x, int y, int z);

	int getX();
	int getY();
	int getZ();

};

#endif // SIZE_H
