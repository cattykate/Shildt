///////////////////////////////
//---OVERLOAD OF OPERATIONS---
//------TASK 12---------------
//--VECTOR MULTIPLY-----------
///////////////////////////////
#include <iostream>

class Vector {
private:
	double x;
	double y;
	double z;
public:
	Vector() : x(0), y(0), z(0) {};
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {};

	friend Vector Vector::operator*(Vector &v1, Vector &v2);
};

Vector operator*(Vector &v1, Vector &v2) {
	Vector tmp;
	tmp.x = v1.y*v2.z - v1.z*v2.y;
	tmp.y = v1.z*v2.x - v1.x*v2.z;
	tmp.z = v1.x*v2.y - v1.y*v2.x;
	return tmp;
}


int main() {

	Vector va (1, 2, 3);
	Vector vb (4, 5, 6);

	Vector vMultiply;

	vMultiply = va*vb;

	return 0;
}

