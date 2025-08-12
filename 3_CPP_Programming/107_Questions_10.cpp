/*
 23.Write a C++ program to Overload new and delete operators.
*/

#include<iostream>
#include<cstdlib>
using namespace std;
class A
{
char x;
public:
	A()
	{
	}
	void* operator new(unsigned int x)
	{
	cout<<x<<endl;
	cout << "new operator overlod" << endl;
	void* ptr=malloc(x);
	return ptr;
	}
	void operator delete(void *p)
	{
	cout << "delete operator overload" << endl;
	free(p);
	}
};
main()
{
A *ob1;
ob1=new A;//obj1.operator new(unsidned sizeof(A));
delete ob1;
}
