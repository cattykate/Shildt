///////////////////////////////
//---TEMPLATES OF FUNCTIONS----
//---TASK 7-------------------
//////////////////////////////
#include <iostream>

// Function delete all entries of x in array: Remove (arr, x)
// Size, type of array and symbol are arbitary

template <typename T> T* Remove(int size, T* arr, T x) {

	for (int i = 0; i < size; i++) {
		if (arr[i] != x) continue;
		else {
			for (int j = i; j < size; j++) {
				arr[j] = arr[j + 1];
			}
		}
		--size;
		i = 0;
	}
	return arr;
}


int main() {

	int size;
	int * arr;
	size = 9;
	arr = new int[size];
	arr[0] = 6;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 2;
	arr[5] = 1;
	arr[6] = 9;
	arr[7] = 8;
	arr[9] = 3;

	Remove(size, arr, 2);

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	
	return 0;
}