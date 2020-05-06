#include<iostream>
using namespace std;

void input_ints(int a[], int size_arr) {

	cout << "[input_ints]" << endl;

	for (int i = 0; i < size_arr; i++) {
		cin >> a[i];
	}
}

void print_ints(int a[], int size_arr) {
	cout << "[print_ints]" << endl;
	for (int i = 0; i < size_arr; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int int_arr[3];

	cout << "input 3 ints"<<endl;
	input_ints(int_arr, 3);
	print_ints(int_arr, 3);

	return 0;
}