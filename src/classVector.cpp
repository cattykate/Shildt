///////////////////////////////
//-------CLASS VECTOR---------
//---OVERLOAD OF OPERATIONS---
//-----TASKS 4, 12, 20--------
//---------FRIEND-------------
//--------TASKS 18------------
//------INPUT/OUTPUT----------
//----------TASK 4------------
///////////////////////////////
#include <iostream>

class Vector {
	int size;
	double *array;
public:
	Vector(int n); 

};

Vector::Vector(int n) {
	size = n;
	array = new double[n]; // allocate memory for n numbers 

	for (int i = 0; i < n; i++) {
		array[i] = 0;
	}
}


int main() {
	
	return 0; 
}