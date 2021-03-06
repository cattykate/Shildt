///////////////////////////////
//---TEMPLATES OF FUNCTIONS----
//-----------------------------
//////////////////////////////
#include <iostream>
#include <vector>
#include <utility>


////////////////////////////////////////////
// -------------------TASK 7----------------
// Function delete all entries of x in array: 
// --------------Remove (arr, x)------------
// Size, type of array and symbol are arbitary
////////////////////////////////////////////
template <typename T> std::pair <T*, int> remove(int size, T* arr, T x) {
	int newSize = size;

	for (int i = 0; i < size; i++) {
		if (arr[i] == x) newSize--;
	}

	T* newArr;
	newArr = new T[newSize];

	for (int i = 0, j = 0; i < size; i++) {
		if (arr[i] == x) continue;
		else {
			newArr[j] = arr[i];
			j++;
		}
	}
	std::pair <T*, int> pums;
	pums = std::make_pair(newArr, newSize);

	//for (int i = 0; i < newSize; i++) {
	//	std::cout << pums.first[i];
	//}
	//std::cout << std::endl << pums.second;

	return pums;
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
// abbbzzxa => abzxa
////////////////////////////////////////////////////

template <typename T> std::pair <T*, int> replaceRepeated(int size, T* arr) {
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
	std::pair <T*, int> pums;
	pums = std::make_pair(newArr, newSize);

	return pums;
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
// -------------------TASK 17-------------------
//--function selection the substring from the array
// --- start with index h, substring has a length 
//----FOR EXAMPLE:   len = 2; h = 3 
// ---------- Substr ("abctest", 3, 2) -> "te"
////////////////////////////////////////////////////

template <typename T> std::pair <T*, int> substr(T* arr, int ind, int len) {
	T* substr;
	substr = new T[len];

	for (int i = ind; i < (ind + len); i++) {
		substr[i] = arr[i];
	}

	std::pair <T*, int> pums;
	pums = std::make_pair(substr, len);

	return pums;
}

////////////////////////////////////////////////////
// -------------------TASK 19-------------------
//--function compare two sequence
// if (s1 > s2) return 1;
// if (s1 == s2) return 0;
// if (s1 < s2) return -1;
// if (comparison not correct) return -2;
////////////////////////////////////////////////////

// FIRST VERSION 
template <typename T> int compareSequences(T* s1, T* s2, int size) {
	T sum1 = 0;
	T sum2 = 0;

	for (int i = 0; i < size ; i++) {
		sum1 = sum1 + s1[i];
		sum2 = sum2 + s2[i];
	}
	if (sum1 > sum2) return 1;
	else if (sum1 == sum2) return 0;
	else if (sum1 < sum2) return -1;
	else return -2; 
}

// SECOND VERSION
// function comparison element-by-element
template <typename T> int compareSequences(T* s1, T* s2, int size1, int size2) {
	bool fl = true;

	if (size1 != size2) return -2; // not correct comparison

	for (int i = 0; i < size1; i++) {
		if (s1[i] != s2[i]) fl = false;
	}
	if (fl == true) return 0; // s1 == s2
	
	for (int i = 0; i < size1; i++) {
		if (s1[i] < s2[i]) return -1; // s1<s2;
		else if (s1[i] > s2[i]) return 1; // s1>s2;
		else continue;
	}
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
	int size = 7;
	arr = new int[size];

	arr[0] = 2;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 3;
	arr[5] = 2;
	arr[6] = 1;

	//remove(size, arr, 2);


	/*char arr1[6] = { 'a', 'b', 'c', 'c', 'e', 's' };
	char arr2[6] = { 'a', 'a', 'a', 'c', 'b', 'a' };*/

	int s1[5] = { 1, 9, 3, 4, 5 };
	int s2[5] = { 1, 9, 3, 4, 5 };
	int res = 0;
	res = compareSequences(s1, s2, 5, 5);
	std::cout << res;
	
	
	/*char string[10] = "abcdefghf";

	substr(arr1, 3, 2);
	substr(string, 3, 3); */

	/*replaceRepeated(7, arr1);
	replaceRepeated(6, arr2);*/

	/*getMinMax(size, arr);
	getMinMax(5, arr1);*/

	//palindrom(size, arr);
	//palindrom(5, arr1);
	//palindrom(6, arr2);


	//replace(arr, 2, 7);


	return 0;

}