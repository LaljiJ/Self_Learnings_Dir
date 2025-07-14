/*

pre post increment

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
	
	A(int a,int b)
	{
	x=a;y=b;
	}

	void get_data()
	{
	cout << "x- " << x << " " << "y- " << y << endl; 
	}

	friend A operator ++(A i);
	friend A operator ++(A);
};
	A operator ++(int i)
	{
	cout << "post" << endl;
	A re;
	re.x=i.x+1;
	re.y=i.y+1;
	return re;
	}
	
	A operator ++(A)
	{
	cout << "pre" << endl;
	A re;
	re.x=x+1;
	re.y=y+1;
	return re;
	}
main()
{
class A a1(10,20),a2;

a2=++a1;
//a2=a1++;
//a2=++a1;

a1.get_data();
a2.get_data();
//a2.get_data();
}




























/*
class A
{
int x,y;

public:
	A()
	{
	}	
	
	A(int a,int b)
	{
	x=a;y=b;
	}

	void get_data()
	{
	cout << "x- " << x << " " << "y- " << y << endl; 
	}
	
	A operator ++(int)
	{
	cout << "post" << endl;
	A re;
	re.x=x+1;
	re.y=y+1;
	return re;
	}
	
	A operator ++()
	{
	cout << "pre" << endl;
	A re;
	re.x=x+1;
	re.y=y+1;
	return re;
	}


};
main()
{
class A a1(10,20),a2;

a2=++a1;
//a2=a1++;
//a2=++a1;

a1.get_data();
a2.get_data();
//a2.get_data();
}
*/
