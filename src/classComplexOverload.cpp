///////////////////////////////
//-------CLASS COMPLEX--------
//---OVERLOAD OF OPERATIONS---
//-------TASKS 2, 18----------
//-------INPUT/OUTPUT---------
//--------TASK 18-------------
///////////////////////////////

#include <iostream>
#include <fstream>
//#include <cmath>

class Complex {
	double real;
	double image;
	double module;
	double argument;
public:
	//Complex() {};
	//Complex() { real = image = 0; }
	Complex() : real(0), image(0) {}
	Complex(double re, double im) { 
		real = re; image = im; getModule(); getArgument(); }

	Complex operator+(Complex op2);
	Complex operator+(double op2);
	bool operator>(Complex op2);
	bool operator<(Complex op2);

	void show();
	void getModule();
	void getArgument();

	friend std::ostream &operator<<(std::ostream &stream, Complex obj); 
	friend std::istream &operator>>(std::istream &stream, Complex &obj);
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
	else if (module == op2.module) {
		if (real < op2.real) return true;
		else return false;
	}
	else if (module > op2.module) return false;
}

void Complex::show() {
	std::cout << "re = " << real << std::endl;
	std::cout << "im = " << image << "\n\n";
}

void Complex::getModule() {
	module = sqrt(real*real + image*image);
}

void Complex::getArgument() {
	const double pi = 3.14159;

	if (real < 0) argument = atan(image / real);
	else if (real < 0 && image > 0) argument = pi + atan(image / real);
	else if (real < 0 && image < 0) argument = -pi + atan(image / real);
}

// overload output operator
std::ostream &operator<<(std::ostream &stream, Complex obj) {
	stream << "|z| = " << obj.module << std::endl;
	stream << "cos(fi) = " << cos(obj.argument) << std::endl;
	stream << "sin(fi) = " << sin(obj.argument) << std::endl;
	return stream;
}

// overload input operator
std::istream &operator>>(std::istream &stream, Complex &obj) {
	stream >> obj.real;
	stream >> obj.image;
	return stream;
}

int main() {
	// ENTRY TO FILE
	std::ofstream out("Complex.txt"); // create and open file
	if (!out) {
		std::cout << "Can't open Complex.txt";
			return 1;
	}
	Complex c(5, 4);

	out << c << "\n"; // output to the "Complex.txt"
	out.close(); // closing the file


	Complex a;
	Complex b = { 1, 3 };

	std::cout << "Enter real and image part of complex number\n";
	std::cin >> a;
	std::cout << a;
	
	return 0;
}