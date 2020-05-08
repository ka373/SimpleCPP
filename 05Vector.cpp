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
	vector<int> vec_copyed;
	
	vec_int.push_back(1);
	vec_int.push_back(7);
	vec_int.push_back(3);

	vec_int.reserve(vec_int.size() - 1);
	print_vec(vec_int);

	vec_copyed = vec_int;

	print_vec(vec_copyed);
	vec_copyed.resize(vec_copyed.size() - 1);
	print_vec(vec_copyed);
	
	return 0;
}