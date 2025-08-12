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
	
	friend A operator +(A,int ob2);
};
	A operator +(A ob1,int ob2)
	{
	A result;

	result.x=ob1.x+ob2;
	result.y=ob1.y+ob2;
	
	return result;
	}

main()
{
A a1(10,20),a2;

a2=a1+100;

a2.get_data();
}
