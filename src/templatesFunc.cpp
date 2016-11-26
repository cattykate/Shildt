///////////////////////////////
//---TEMPLATES OF FUNCTIONS----
//---TASK 7-------------------
//////////////////////////////
#include <iostream>
#define SIZE 4

// Function delete all entries of x in array: Remove (arr, x)
// Size, type of array and symbol are arbitary

template <typename T> T* Remove(T* arr, T x) {

	int num = SIZE;

	for (int i = 0; i < num; i++) {
		if (arr[i] != x) continue;
		else {
			for (int j = i; i < num; i++) {
				arr[j] = arr[j + 1];
			}
			--num;
		}
	}
	return arr;
}

int main() {
	int arr[SIZE] = { 6, 1, 2, 3 };
	Remove(arr, 2);
	return 0;
}