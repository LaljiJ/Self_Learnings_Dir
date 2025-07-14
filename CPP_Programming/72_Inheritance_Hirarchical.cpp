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
	}
	

};
///////////////////
class D1:public B1
{
int y;
public:
	D1(int a,int b):B1(a)
	{
	cout << "const D1" << endl;
	y=b;
	}

};
/////////////////////////
class D2:public B1
{
int z;
public:
	D2(int a,int c):B1(a)
	{
	cout << "const D2" << endl;
	z=c;
	}

};
///////////////////////
class D3:public B1
{
int w;
public:
	D3(int a,int d):B1(a)
	{
	cout << "const D3" << endl;
	w=d;
	}

};
//////////////////////////
main()
{
D3 d(10,20,30,40);


/*
cout << "B1-" << sizeof(B1) << endl; 
cout << "D1-" << sizeof(D1) << endl; 
cout << "D2-" << sizeof(D2) << endl; 
cout << "D3-" << sizeof(D3) << endl; 
*/
}
