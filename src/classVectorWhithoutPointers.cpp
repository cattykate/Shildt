///////////////////////////////
//---OVERLOAD OF OPERATIONS---
//-----TASK 4, 20 ---------------
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

	
	friend double operator+(Vector va, Vector vb); // scalar multiply for two vectors
	friend Vector operator*(Vector va, Vector vb); // vector multiply
	friend double operator+(Vector va, double num); // scalar myltiply for vector with real number
	 
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

//OVERLOAD TASK 20
//Scalar multiply for two vectors
double operator+(Vector va, Vector vb) {
	double scalar = 0.0;
	for (int i = 0; i < va.size; i++) {
		scalar = scalar + va.vec[i] * vb.vec[i];
	}
	return scalar;
}

//Scalar multiply for vector with real mumbers
double operator+(Vector va, double num) {
	double scalar = 0.0;
	for (int i = 0; i < va.size; i++) {
		scalar = scalar + va.vec[i] * num;
	}
	return scalar;
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
	

	//Vector vc(3);
	double num = 7.0;
	

	double scalar = 0;
	scalar = va + vb;
	scalar = va + num;

	return 0;
}