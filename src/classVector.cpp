///////////////////////////////
//-------CLASS VECTOR---------
//---------FRIEND-------------
//--------TASKS 18------------
///////////////////////////////
#include <iostream>
#include <vector>
#include <cmath>


class Vector {
	//std::vector <double> data;
	double *data;
	int size;
public:	
	Vector(int n, double *arr);
	Vector(): size(0), data(0) {}

	double getMod();

	double operator [] (int a) {
		return data[a];
	}	

	friend double operator*(Vector va, Vector vb);
	friend double operator%(Vector va, Vector vb);

};

double Vector::getMod() {
	double tmp = 0.0;
	for (int i = 0; i < size; i++) {
		tmp = tmp + data[i] * data[i];
	}
	return sqrt(tmp);
}

Vector::Vector(int n, double *arr) {
	size = n;
	data = new double[n];

	for (int i = 0; i < n; i++)
	{
		data[i] = arr[i];
	}
}

// + with Vector 
// DON'T CORRECCT
// ERROR


// SCALAR MULTIPLY
double operator*(Vector va, Vector vb) {
	double scal = 0;
	for (int i = 0; i < va.size; i++) {
		scal = scal + va.data[i]*vb.data[i];
	}
	return scal;
}

//PROJECTION
double operator%(Vector va, Vector vb) {
	return ((va*vb) / vb.getMod());
}


int main() {
	double a[] = { 1,1,1 };
	Vector va(3, a);

	double b[] = { 1,1,1 };
	Vector vb(3, b);


	va = va + 3.0;


	return 0; 
}