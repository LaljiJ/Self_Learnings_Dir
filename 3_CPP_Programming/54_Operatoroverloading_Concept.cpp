#include<iostream>
using namespace std;
class A
{
int x,y;

public:
	A()
	{
	cout << " def constructor " << endl;
	}
	A(int a,int b)
	{
	x=a;
	y=b;
	}
	~A()
	{
	cout << " desstructor " << endl;
	}
	void get_data()
	{
	cout << "x- " << x << " " <<  "y- " << y << endl;
	}
	

	A operator + (int c)
	{
	A result;
	result.x=x+c;
	result.y=y+c;
	return result;
	}

};
main()
{
class A a1(10,20),a2;

a2=a1+100;
a2.get_data();
}


