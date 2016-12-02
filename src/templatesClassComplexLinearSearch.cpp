///////////////////////////////////////////////////////
// --------- TEMPLATES OF CLASSES--------
// --------- TASK 4 ---------------------
// #1 template of the list
// adding - only at the end
// removal - only at the end
// indexing - no
// constructors, destructors +
// #2 put the objects of type Complex numbers into list
// realize Linerial Search
////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

class Complex {
private:
	double real;
	double image;
public:
	Complex(double re, double im) : real(re), image(im) {};
	Complex() {};
	~Complex() {};
};

template <class T> class MyList {
private:
	std::vector <T> vecList;
public:
	MyList(int size) : vecList(size) {};
	~MyList{ vecList.clear(); }

	void addLast(T val) { vecList.push_back(val); }
	void removeLast(T val) { vecList.pop_back(val); }

	int getSize() { return vecList.size(); }
};


int main() {


	return 0;
}