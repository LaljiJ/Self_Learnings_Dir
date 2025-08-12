/*

+ overload

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
	
	A operator -(A temp)
	{
	A result;

	result.x=x-temp.x;
	result.y=y-temp.y;
	
	return result;
	}
	
	

};
main()
{
A a1(10,20),a2(100,200),a3(1000,2000),a4(1,2),a5;

a5=a1-a2-a3-a4;

a5.get_data();
}
