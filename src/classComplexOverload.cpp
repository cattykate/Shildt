///////////////////////////////
//---OVERLOAD OF OPERATIONS----
//-------CLASS COMPLEX--------
//-------TASKS 2, 18----------
///////////////////////////////

#include <iostream>
//#include <cmath>

class Complex {
	double real;
	double image;
	double module;
public:
	//Complex() { real = image = 0; }
	Complex() : real(0), image(0) {}
	Complex(double re, double im) { real = re; image = im; getModule();}
	Complex operator+(Complex op2);
	Complex operator+(double op2);
	bool operator>(Complex op2);
	bool operator<(Complex op2);

	void show();
	void getModule();
};

// ovearload operator+ for Complex numbers
Complex Complex::operator+(Complex op2) {
	Complex tmp;

	tmp.real = real + op2.real;
	tmp.image = image + op2.image;
	return tmp; // return new object, arguments didn't change
}

//overload operator+ for real numbers
Complex Complex::operator+(double op2) {
	Complex tmp;

	tmp.real = real + op2;
	tmp.image = image;
	return tmp;
}

// overload operator> for complex numbers
bool Complex::operator>(Complex op2) {
	if (module > op2.module) return true;
	if (module == op2.module) {
		if (real > op2.real) return true;
		else return false;
	}
	if (module < op2.module) return false;
}

// overload operator< for complex numbers
bool Complex::operator<(Complex op2) {
	if (module < op2.module) return true;
	if (module == op2.module) {
		if (real < op2.real) return true;
		else return false;
	}
	if (module > op2.module) return false;
}

void Complex::show() {
	std::cout << "re = " << real << std::endl;
	std::cout << "im = " << image << "\n\n";
}

void Complex::getModule() {
	module = sqrt(real*real + image*image);
}

int main() {
	Complex a;
	Complex b = { 1, 3 };
	Complex c(5, 4);

	a.show();
	a = b + 2.0;
	a.show();
	b.show();
	c.show();

	if (a < b) std::cout << "a<b\n";
	if (a > b) std::cout << "a>b\n";

	return 0;
}