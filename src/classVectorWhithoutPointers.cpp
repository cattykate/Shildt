///////////////////////////////
//---OVERLOAD OF OPERATIONS---
//-----TASKS 4, 12, 20-------
//------INPUT/OUTPUT----------
//----------TASK 4------------
///////////////////////////////
#include <iostream>
#include <vector>

class Vector {
private:
	int size;
public:
	std::vector<double> vec;
	Vector(int n);
	

	Vector operator+(double num);
	Vector operator+(Vector vb);
};

Vector::Vector(int n) {
	size = n;
	for (int i = 0; i < size; i++) {
		vec.push_back(0);
	}
}

Vector Vector::operator+(double num) {

	for (int i = 0; i < size; i++) {
		vec[i] = vec[i] + num;
	}
	return *this;
}

Vector Vector::operator+(Vector vb) {
	for (int i = 0; i < size; i++) {
		vec[i] = vec[i] + vb.vec[i];
	}
	return *this;
}

int main() {
	Vector va(3);
	Vector vb(3);

	va.vec[0] = 1;
	va.vec[1] = 1;
	va.vec[2] = 1;
	

	vb.vec[0] = 1;
	vb.vec[1] = 1;
	vb.vec[2] = 1;
	

	Vector vc(3);
	/*double cnum = 7.0;
	vc = va + cnum;*/
	vc = va + vb;


	return 0;
}