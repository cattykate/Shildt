#include <iostream>


// function returns minimum 
int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else return b;
}

// This version of function ignores register of letters. uppercase  lowercase
char min(char a, char b) {
	if (tolower(a) < tolower(b)) {
		return a;
	}
	else return b;
}

/*function min() is for pointers to type int
this function compares values and returns pointer to minimal value
*/
int *min(int *a, int *b) {
	if (*a < *b) {
		return a;
	}
	else return b;
}

// this function shows the bits of byte 
void showBinary(unsigned int u) {
	int t = 0;
	
	for (t = 128; t > 0; t = t / 2) {
		if (u&t) {
			std::cout << "1 ";
		}
		else std::cout << "0 ";
	}
	std::cout << std::endl;
}


int divZero() {
	std::cout << "Sorry! :( i can't divide by zero!"; 
	return 0;
}
int main() {


	/*std::cout << "min ('X', 'a'): " << min('X', 'a') << std::endl;
	std::cout << "min(9, 3): " << min(9, 3) << std::endl;
	std::cout << "*min(&i, &j): " << *min(&i, &j) << std::endl;*/

	
	//int i = 1; 

	//for (int t = 0; t < 8; t++) {
	//	showBinary(i);
	//	i = i << 1; // left shift
	//}
	//std::cout << "\n";

	//for (int t = 0; t < 8; t++) {
	//	i = i >> 1; // right shift
	//	showBinary(i);
	//}
	//std::cout << "\n"; 

	
	int i = 0;
	int j = 0;
	int result = 0;
	

	std::cout << "Enter dividend and divisor: ";
	std::cin >> i >> j;

	result = j ? i / j : divZero(); // we use operator ? for prevent an error division by zero

	std::cout << "Result: " << result;

	system("pause");
	return 0;
}