#include <iostream>
#include <string>

using namespace std;

template <typename T>
int linearSearch(T A[], int n, T value) {
	for (int i = 0; i < n; i++) {
		if (A[i] == value) {
			return i;
		}
	}
	return -1; 
}
void printSearchResult(int I, int key) {
	if (I != -1) {
		cout << "Value " << key << " found at index: " << I << endl;
	}
	else {
		cout << "Value " << key << " not found in the array." << endl;
	}
}

void printSearchResult(int I, float key) {
	if (I != -1) {
		cout << "Value " << key << " found at index: " << I << endl;
	}
	else {
		cout << "Value " << key << " not found in the array." << endl;
	}
}

void printSearchResult(int I, string key) {
	if (I != -1) {
		cout << "Value " << key << " found at index: " << I << endl;
	}
	else {
		cout << "Value " << key << " not found in the array." << endl;
	}
}

int main() {
	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 12;
	int intIndex = linearSearch(intArray, 5, intKey);
	printSearchResult(intIndex, intKey);

	// Test with a float array of size 4
	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	float floatKey = 1.62;
	int floatIndex = linearSearch(floatArray, 4, floatKey);
	printSearchResult(floatIndex, floatKey);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch(stringArray, 4, stringKey);
	printSearchResult(stringIndex, stringKey);
	system("pause");
	return 0;
}
