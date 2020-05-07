#include<iostream>
using namespace std;

void sort_arr(int a[], int size_arr) {

	for (int i = 0; i < size_arr; i++) {

		///////////////////////////////////////////////
		for (int j = i + 1; j < size_arr; j++) {
			/////////////////////////////
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			/////////////////////////////
		}
		///////////////////////////////////////////////
	}
}

void print_arr(int a[], int size_arr) {
	for (int i = 0; i < size_arr; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int arr[7] = { 1, 7, 8, 3, 2, 9, 5 };

	sort_arr(arr, 7);
	print_arr(arr, 7);

	return 0;
}