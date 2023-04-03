#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size, int* swapNum);

int main() {
	int* a;
	int size;
	int swapNum = 0;
	cout << "배열의 사이즈: ";
	cin >> size;

	a = new int[size];
	cout << "\n배열의 내용: ";
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}

	bubbleSort(a, size, &swapNum);
	cout << swapNum << endl;

	delete[] a;
	return 0;
}

void bubbleSort(int* arr, int size, int* num) {
	int temp;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (*(arr + j) > *(arr + j + 1)) {
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
				num++;
				cout << num << endl;
			}
		}
	}
} // swapNum 오류
