#include <iostream>

class A1 {
protected:
	int a1;
public:
	A1 (int a1val) : a1(a1val) {};

	virtual void print() {
		std::cout << "Class A1: \n";
	}
};


class B1 : public A1 {
protected:
	int b1;
public:
	B1(int b1val, int a1val) : b1(b1val), A1(a1val) {};

	virtual void print() {
		std::cout << "Class B1: \n";
	}

};


class B2 : public A1 {
protected:
	int b2;
public:
	B2(int b2val, int a1val) : b2(b2val), A1(a1val) {};
	
	virtual void print() {
		std::cout << "Class B2: \n";
	}
	
};

class B3 : public A1 {
protected:
	int b3;
public:
	B3(int b3val, int a1val) : b3(b3val), A1(a1val) {};
	
	virtual void print() {
		std::cout << "Class B3: \n";
	}
	
};


class C1 : public B1, B2, B3 {
protected:
	int c1;
public:
	C1(int c1val, int a1val, int b1val, int b2val, int b3val) : c1(c1val), 
		B1(b1val, a1val), B2(b2val, a1val), B3(b3val, a1val) {};
	
	void print() {
		std::cout << "Class C1: \n";
	}
	
};


class C2 : public B1, B2, B3 {
protected:
	int c2;
public:
	C2(int c2val, int a1val, int b1val, int b2val, int b3val) : c2(c2val),
		B1(b1val, a1val), B2(b2val, a1val), B3(b3val, a1val) {};

	void print() {
		std::cout << "Class C2: \n";
	}
};
	

class C3 : public B1, B2, B3 {
protected:
	int c3;
public:
	C3(int c3val, int a1val, int b1val, int b2val, int b3val) : c3(c3val),
		B1(b1val, a1val), B2(b2val, a1val), B3(b3val, a1val) {};
	
	void print() {
		std::cout << "Class C3:  \n";
	}
	
};


int main() {
	
	A1 a1obj = A1(10);
	B1 b1obj = B1(1, 10);
	C1 c1obj = C1(21, 10, 1, 67, 9);	

	return 0;
}