///////////////////////////////
//---TEMPLATES OF FUNCTIONS----
//---TASK 7-------------------
//////////////////////////////
#include <iostream>
#include <vector>

////////////////////////////////////////////
// -------------------TASK 7----------------
// Function delete all entries of x in array: 
// --------------Remove (arr, x)------------
// Size, type of array and symbol are arbitary
////////////////////////////////////////////
template <typename T> void remove(int size, T* arr, T x) {
	T* tmpArr;
	int newSize = 0;
	tmpArr = new T[newSize];

	for (int i = 0, j = 0; i < size; i++) {
		if (arr[i] != x) {
			tmpArr[j] = arr[i];
			j++;
			newSize++;
		}
	}

	for (int i = 0; i < newSize; i++) {
		std::cout << tmpArr[i] << " ";
	}
}

////////////////////////////////////////////////////
// -------------------TASK 8-----------------------
// This function replace symbol x to simbol y in array: 
//----------Replace(arr, x, y);--------------------
// Size, type of array and symbol are arbitary
////////////////////////////////////////////////////
#define arr_size 6

template <class T> T* replace(T* arr, T x, T y) {
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] == x) {
			arr[i] = y;
			i++;
		}
	}
	return arr;
}


////////////////////////////////////////////////////
// -------------------TASK 10----------------------
// function replaces all the instances repeated 
// characters in a string
// abbbzzx => abzx
////////////////////////////////////////////////////

template <typename T> void replaceRepeated(int size, T* arr) {
	T* newArr;
	newArr = new T[size];
	int newSize = 0;
	
	for (int i = 0, j = 0; i < size; i++) {
		if (arr[i] != arr[i + 1]) {
			newArr[j] = arr[i];
			j++;
			newSize++;
		}
	}

	for (int i = 0; i < newSize; i++) {
		std::cout << newArr[i] << " ";
	}
	std::cout << std::endl;
}

////////////////////////////////////////////////////
// -------------------TASK 12----------------
//function checks whether the string is a palindrome
////////////////////////////////////////////////////

template <typename T> void palindrom(int size, T* arr) {
	bool fl = true;
	int middle = 0;

	if (size % 2 == 0) middle = ((size / 2)+1);
	else middle = (size / 2);

	for (int i = 0, j = (size - 1) ; i < middle; i++, j--) {
		if (arr[i] != arr[j])
			fl = false;
		else {
			i++;
			j--;
		}
	}

	if (fl == false) {
		std::cout << "\nString is not a palindrom!" << std::endl;
	}

	else std::cout << "\nString is a palindrom!" << std::endl;
}


////////////////////////////////////////////////////
// -------------------TASK 24-------------------
//--function finds MAX and MIN values in array--
////////////////////////////////////////////////////

template <typename T> void getMinMax(int size, T* arr) {
	T min = arr[0];
	T max = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	std::cout << "MIN = " << min << std::endl;
	std::cout << "MAX = " << max << std::endl;
 }

int main() {
	
	int * arr;
	int size;
	size = 7;
	arr = new int[size];

	arr[0] = 2;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 3;
	arr[5] = 2;
	arr[6] = 1;

	char arr1[5] = { 'a', 'a', 'c', 'c', 'b' };
	char arr2[6] = { 'a', 'a', 'a', 'c', 'b', 'a' };

	replaceRepeated(5, arr1);
	replaceRepeated(6, arr2);

	/*getMinMax(size, arr);
	getMinMax(5, arr1);*/

	remove(size, arr, 2);

	//palindrom(size, arr);
	//palindrom(5, arr1);
	//palindrom(6, arr2);


	//replace(arr, 2, 7);

	//for (int i = 0; i < size; i++) {
	//	std::cout << arr[i] << " ";
	//	}

	return 0;

}