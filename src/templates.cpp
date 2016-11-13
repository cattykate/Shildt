#include <iostream>

#define arr_size 5

template <class T> int* Replace (T* arr, T x, T y) {
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] == x) {
			arr[i] = y;
		}
	}
	return arr;
}

int main() {

	int array [arr_size] = { 6, 1, 2, 3, 2 };
	std::cout << "Current array: ";

	for (int i = 0; i < arr_size; i++) {
		std::cout << array[i];
	}

	Replace (array, 2, 7);
	std::cout << "\nArray after replace: ";
	for (int i = 0; i < arr_size; i++) {
		std::cout << array[i];
	}


	/*char array2[arr_size] = { 'a', 'b', 'c', 'd', 'e' };
	std::cout << "Current array: ";

	for (int i = 0; i < arr_size; i++) {
		std::cout << array[i];
	}

	char x = 'a';
	char y = 'R';
	Replace(array2, x, y);
	std::cout << "\nArray after replace: ";
	for (int i = 0; i < arr_size; i++) {
		std::cout << array[i];
	}*/

	return 0;
}