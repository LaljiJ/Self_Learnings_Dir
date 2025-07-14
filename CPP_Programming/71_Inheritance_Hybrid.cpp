#include<iostream>
using namespace std;
class B1
{
int x;
public:
	B1(int a)
	{
	cout << "const B1" << endl;
	x=a;
	cout << "x-" << x << endl;
	}
	~B1()
	{
	cout << "dest B1" << endl; 
	}

};
//////////////////////////
class D1:public B1
{
int y;
public:
	D1(int a,int b):B1(a)
	{
	cout << "const D1" << endl;
	y=b;
	cout << "y-" << y << endl; 
	}
	~D1()
	{
	cout << "dest D1" << endl; 
	}

};
//////////////////////////////
class B2
{
int z;
public:
	B2(int c)
	{
	cout << "const B2" << endl;
	z=c;
	cout << "z-" << z << endl;
	}
	~B2()
	{
	cout << "dest B2" << endl; 
	}

};
/////////////////////////////
class D2:public D1,public B2
{
int w;

public:
	D2(int a,int b,int c,int d):D1(a,b),B2(c)
	{
	cout << "const D2" << endl;
	w=d;
	cout << "w-" << w << endl;
	}
	~D2()
	{
	cout << "dest D2" << endl; 
	}
};
///////////////////////////////////////
main()
{
D2 d(10,20,30,40);


/*
cout << "B1-" << sizeof(B1) << endl;
cout << "D1-" << sizeof(D1) << endl;
cout << "B2-" << sizeof(B2) << endl;
cout << "D2-" << sizeof(D2) << endl;
*/
}

