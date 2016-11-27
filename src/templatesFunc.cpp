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
template <typename T> T* Remove(int size, T* arr, T x) {

	for (int i = 0; i < size; i++) {
		if (arr[i] != x) continue;
		else {
			for (int j = i; j < size; j++) {
				arr[j] = arr[j + 1];

			}
		}
		i = 0;
	}
	return arr;
}

////////////////////////////////////////////////////
// -------------------TASK 12----------------
//function checks whether the string is a palindrome
////////////////////////////////////////////////////


template <typename T> void Palindrom(int size, T* arr) {
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

int main() {
	
	int size;
	int * arr;
	size = 7;
	arr = new int[size];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 3;
	arr[5] = 2;
	arr[6] = 1;
//	arr[7] = 1;


	//Remove(size, arr, 2);

	//for (int i = 0; i < size; i++) {
	//	std::cout << arr[i] << " ";
	//}

	char arr1[5] = { 'a', 'b', 'c', 'c', 'b' };
	char arr2[6] = { 'a', 'b', 'c', 'c', 'b', 'a' };

	Palindrom(size, arr);
	Palindrom(5, arr1);
	Palindrom(6, arr2);
	return 0;

}