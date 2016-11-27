///////////////////////////////
//---TEMPLATES OF FUNCTIONS----
//---TASK 7-------------------
//////////////////////////////
#include <iostream>
#define SIZE 9

// Function delete all entries of x in array: Remove (arr, x)
// Size, type of array and symbol are arbitary

template <typename T> T* Remove(T* arr, T x) {

	int num = SIZE;

	for (int i = 0; i < num; i++) {
		if (arr[i] != x) continue;
		else {
			for (int j = i; j < num; j++) {
				arr[j] = arr[j + 1];
			}
		}
		--num;
		i = 0;
	}
	return arr;
}


int main() {
	int arr[SIZE] = { 6, 1, 2, 3, 2, 5, 7, 2, 4 };
	Remove(arr, 2);
	
	return 0;
}