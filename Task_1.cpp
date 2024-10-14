#include <iostream>
#include <string>

using namespace std;

template <typename T>
void selectionSort(T A[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int SmallSub = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[SmallSub]) {
				SmallSub = j;
			}
		}
		
		swap(A[i], A[SmallSub]);
	}
}

template <typename T>
void printArray(T A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

int main() {
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printArray(intArray, 5);
	selectionSort(intArray, 5);
	cout << "Sorted integer array: ";
	printArray(intArray, 5);

	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	cout << "\nOriginal string array: ";
	printArray(stringArray, 4);
	selectionSort(stringArray, 4);
	cout << "Sorted string array: ";
	printArray(stringArray, 4);
	system("pause");
	return 0;
}
