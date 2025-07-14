/*
WAP to below expression meber aswalays friend function
a5=a1+a2*a3-a4;
*/


#include<iostream>
using namespace std;

/////////////// using member function /////////////////////
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
	
	A operator +(A ob1)
	{
	A result;

	result.x=x+ob1.x;
	result.y=y+ob1.y;
	
	return result;
	}
	
	A operator *(A ob1)
	{
	A result;
	
	result.x=x*ob1.x;
	result.y=y*ob1.y;
	
	return result;
	}
	
	A operator-(A ob1)
	{
	A result;
	
	result.x=x-ob1.x;
	result.y=y-ob1.y;

	return result;
	}

};
main()
{
A a1(1,5),a2(2,6),a3(3,7),a4(4,8),a5;

a5=a1+a2*a3-a4;

a5.get_data();
}


////////////// using friend function ////////////////////////////
/*
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
	
	friend A operator +(A,A);
	friend A operator *(A,A);
	friend A operator -(A,A);
};
	A operator +(A ob1,A ob2)
	{
	A result;

	result.x=ob1.x+ob2.x;
	result.y=ob1.y+ob2.y;
	
	return result;
	}
	
	A operator *(A ob1,A ob2)
	{
	A result;
	
	result.x=ob1.x*ob2.x;
	result.y=ob1.y*ob2.y;
	
	return result;
	}
	
	A operator-(A ob1,A ob2)
	{
	A result;
	
	result.x=ob1.x-ob2.x;
	result.y=ob1.y-ob2.y;

	return result;
	}

main()
{
A a1(1,5),a2(2,6),a3(3,7),a4(4,8),a5;

a5=a1+a2*a3-a4;

a5.get_data();
}
*/

