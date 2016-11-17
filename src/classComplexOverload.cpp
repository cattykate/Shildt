#include <iostream>

class Complex {
	double real;
	double image;
public:
	//Complex() { real = image = 0; }
	Complex() : real(0), image(0) {};
	Complex(double re, double im) : real(re), image(im) {};
	Complex operator+(Complex op2);

	void show();
};

// ovearload operator+ for Complex numbers
Complex Complex::operator+(Complex op2) {
	Complex tmp;

	tmp.real = real + op2.real;
	tmp.image = image + op2.image;
	return tmp; // return new object, arguments didn't change
}


void Complex::show() {
	std::cout << "re = " << real << std::endl;
	std::cout << "im = " << image << "\n\n";
}

int main() {
	Complex a;
	Complex b = { 1, 3 };
	Complex c(5, 4);

	a.show();
	a = b + c;

	a.show();
	b.show();
	c.show();

	return 0;
}