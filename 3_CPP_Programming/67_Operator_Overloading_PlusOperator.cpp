/*
WAP to overload + operator
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
	
	friend A operator +(int ob1,A);
};
	A operator +(int ob1,A ob2)
	{
	A result;

	result.x=ob1+ob2.x;
	result.y=ob1+ob2.y;
	
	return result;
	}

main()
{
A a1(10,20),a2;

a2=100+a1;

a2.get_data();
}
