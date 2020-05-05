#include<iostream>
#include<cmath>
using namespace std;

class k {
	int a;
	int b;
	int c;
public:
	int bb;
};

int main() {
	int a;
	double b = 3.5;
	string k;

	int s1, s2;

	enum MONLENGTH {JAN = 31, FEB = 28};
	enum Month { jan = 1, feb = 2 };

	a = (RAND_MAX - rand())/static_cast<double>(RAND_MAX);
	a = floor(b + 0.5);

	cout<<"double 입력: ";
	cin>>b;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<b<<endl;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);

	cerr<<"error desu"<<endl;

	cout.precision(5);
	a = static_cast<int>(b);
	cout<<"a: "<<b<<endl;

	cout<<"s1, s2입력: \n";
	cin>>s1>>s2;

	cout<<"s1: "<<s1<<"s2: "<<s2<<endl;

	cin>>a>>b;

	cout<<"rand num: "<<rand()<<endl;


	//cout<<"Hello\nworld";

	//cin>>a;

	//cout<<a<<"입니다"<<endl;

	//a = static_cast<int>(b);

	//cout<<a<<"desu"<<endl;

	//a = static_cast<int>(b);
	//a = static_cast<int>(b);
	//cout<<"hello world";

	//b = static_cast<int>(b);
}