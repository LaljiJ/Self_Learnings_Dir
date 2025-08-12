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
//	friend A operator = (A); // not passible uisng friedn function

	A operator =(A temp)
	{
	A result;

	result.x=x=temp.x;
	result.y=y=temp.y;
	
	return *this;
	}
};
main()
{
A a1(10,20),a2,a3;

a3= a2=a1;

a3.get_data();

}
