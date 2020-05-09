#include<iostream>
#include<vector>
using namespace std;

void print_vec(vector<int> a) {
	for (unsigned int i = 0; i < a.size(); i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main() {
	vector<int> vec_int;
	vector<int> vec_copied;
	vector<int> vec_copied2;
	
	vec_int.push_back(1);
	vec_int.push_back(7);
	vec_int.push_back(3);

	vec_int.reserve(vec_int.size() - 1);

	cout<<"vec_int"<<endl;
	print_vec(vec_int);
	cout<<endl;

	vec_copied = vec_int;
	vec_copied2 = vec_int;

	cout<<"vec_copied"<<endl;
	vec_copied.resize(vec_copied.size() - 1);
	print_vec(vec_copied);
	cout << endl;

	cout<<"vec_copied2"<<endl;
	vec_copied2.erase(vec_copied2.begin() + 1);
	print_vec(vec_copied2);
	cout<<endl;
	
	return 0;
}
