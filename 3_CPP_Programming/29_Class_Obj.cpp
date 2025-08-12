#include<iostream>
using namespace std;
class A
{
int x,y;

public:
	void set_data()
	{
	//cin >> x >> y >> (unsigned)this;
	//cout << "set" << (unsigned)this << endl;
	//cout << "set-" << this << endl;
	cout << "set-" << (int)this << endl;
	x=10,y=20;
	}
	void get_data()
	{
	//cout << "get" << (unsigned)this << endl;
	//cout << "get-" << this << endl;
	cout << "get-" << (int)this << endl;
	cout << x << " " << y << endl;
	}
};
main()
{
A ob1,ob2;

//cout << "ob1" << (unsigned)&ob1 << endl;
//cout << "ob2" << (unsigned)&ob2 << endl;

//cout << "ob1-" << &ob1 << endl;
//cout << "ob2-" << &ob2 << endl;

cout << "ob1-" << (int)&ob1 << endl;
cout << "ob2-" << (int)&ob2 << endl;

ob1.set_data();
ob1.get_data();

ob2.set_data();
ob2.get_data();
}
