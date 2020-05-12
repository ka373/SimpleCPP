#include<iostream>
#include<string>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////
void slice_str_n_insert_into_arr(string str, string tok, string arr[], int size_arr) {
	char* char_temp;
	int i = 0;
	char* slice = strtok_s((char*)str.c_str(), (char*)tok.c_str(), &char_temp);

	while (slice != NULL && i < size_arr) {
		//cout<<slice<<endl;
		arr[i] = slice;
		slice = strtok_s(NULL, (char*)tok.c_str(), &char_temp);
		i++;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////

int main() {
	string str1 = "str1";
	char* char1 = "char1";
	
	string str2;
	char* char2;

	//////////////////////////////////
	char2 = (char*)str1.c_str();
	str2 = char1;
	cout<<"str2: "<<str2<<endl;
	//////////////////////////////////

	//////////////////////////////////////////////////////////////////
	cout<<"=========================================="<<endl;
	string str3 = "aaa\nb b b";
	cout << str3 << endl << endl;

	char* char_temp;
	char* slice = strtok_s((char*)str3.c_str(), "\n", &char_temp);

	while (slice != NULL) {
		cout<<slice<<endl;
		slice = strtok_s(NULL, "\n", &char_temp);
	}
	//////////////////////////////////////////////////////////////////
	cout << "==========================================" << endl;
	string arr_str1[10];
	string str4 = "a b c bb bbb bbbbb";
	cout<<str4<<endl<<endl;

	slice_str_n_insert_into_arr(str4," ", arr_str1, 10);
	
	for (int i = 0; i < 10; i++) {
		cout<<"arr_str1["<<i<<"]: "<<arr_str1[i]<<endl;
	}
	//////////////////////////////////////////////////////////////////
	cout << "==========================================" << endl;

	string arr_str2[10];
	string arr_front[5];

	string str5 = "1:2:3 b c d e f g";
	slice_str_n_insert_into_arr(str5, " ", arr_str2,10);
	slice_str_n_insert_into_arr(arr_str2[0], ":", arr_front, 5);

	cout<<"arr_front[1]: "<<arr_front[1]<<endl;
	
	int front1 = 0;
	front1 = stoi(arr_front[1]);
	cout<<"arr_front[1]+1: "<<front1+1<<endl<<endl;

	return 0;
}