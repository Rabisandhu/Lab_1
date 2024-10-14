#include <iostream>
#include <string>

using namespace std;


template <typename T>
int binarySearch(T A[], int n, T value) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (A[mid] == value) {
			return mid;
		}
		else if (A[mid] < value) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
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
	// Test with an integer array (sorted) of size 5
	int intArray[5] = { 11, 12, 22, 25, 64 };
	int intKey = 22;
	int intIndex = binarySearch(intArray, 5, intKey);
	printSearchResult(intIndex, intKey);

	// Test with a float array (sorted) of size 4
	float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
	float floatKey = 2.71;
	int floatIndex = binarySearch(floatArray, 4, floatKey);
	printSearchResult(floatIndex, floatKey);

	// Test with a string array (sorted) of size 4
	string stringArray[4] = { "apple", "banana", "grape", "orange" };
	string stringKey = "grape";
	int stringIndex = binarySearch(stringArray, 4, stringKey);
	printSearchResult(stringIndex, stringKey);
	system("pause");
	return 0;
}
