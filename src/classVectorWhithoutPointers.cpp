///////////////////////////////
//---OVERLOAD OF OPERATIONS---
//-----TASKS 4, 12, 20-------
//------INPUT/OUTPUT----------
//----------TASK 4------------
///////////////////////////////
#include <iostream>
#include <vector>
#include <cmath>

class Vector {
private:
	int size;
public:
	std::vector<double> vec;
	Vector(int n);
	
	double getMod();

	//OVERLOAD TASK 4
	//Vector operator+(double num);
	//Vector operator+(Vector vb);

	friend double operator+(Vector va, Vector vb); // scalar multiply
	friend Vector operator*(Vector va, Vector vb); // vector multiply
	 
};

Vector::Vector(int n) {
	size = n;
	for (int i = 0; i < size; i++) {
		vec.push_back(0);
	}
}

 double Vector::getMod() {
	 double module = 0.0;
	 for (int i = 0; i < size; i++) {
		 module = module + vec[i] * vec[i];
	 }
	 return sqrt(module);
}

 // OVERLOAD TASK 4
 // ADDITION VECTOR WHITH REAL NUMBER
//Vector Vector::operator+(double num) {
//
//	for (int i = 0; i < size; i++) {
//		vec[i] = vec[i] + num;
//	}
//	return *this;
//}

// ADDITION VECTOR WHITH VECTOR
//Vector Vector::operator+(Vector vb) {
//	for (int i = 0; i < size; i++) {
//		vec[i] = vec[i] + vb.vec[i];
//	}
//	return *this;
//}

//OVERLOAD TASK 12
//Scalar multiply
double operator+(Vector va, Vector vb) {
	double scalar = 0.0;
	for (int i = 0; i < va.size; i++) {
		scalar = scalar + va.vec[i] * vb.vec[i];
	}
	return scalar;
}
//Vector multiply


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



	return 0;
}