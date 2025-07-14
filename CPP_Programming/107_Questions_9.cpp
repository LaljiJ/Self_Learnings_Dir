/*
9.Write a C++ Program to define 3 classes. Read & Display the data for 3 classes using friend function.
*/

#include<iostream>
using namespace std;
class A
{
int x;
int y;
public:
	friend void set_data();
	friend void get_data();
};
///////////////////////
/*class B
{
int x;
int y;
public:

};
/////////////////////
class C
{
int x;
int y;
public:

};
*/
	friend void set_data()
	{
	cout << "set data" << endl;
	}
	friend void get_data()
	{
	cout << "get data" << endl;
	}

/////////////////////
main()
{
A ob;
ob.set_data();
ob.get_data();

}
