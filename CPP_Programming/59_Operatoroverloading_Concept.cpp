/*

= overload

*/



#include<iostream>
using namespace std;
class A
{
int x,y;
	
public:
	A()
	{
	}

	A(int a,int b):x(a),y(b)
	{
	}	
	
	void get_data()
	{
	cout << "x- " << x << endl;
	cout << "y- " << y << endl;
	}

	A operator ()(int a,int b)
	{

	x=a;
	y=b;
	
	}
};
main()
{
A a1;

a1(100,200);

a1.get_data();

}
