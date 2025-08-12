#include <iostream>
using namespace std;
class A
{
int x;
public:
	void test1()
	{
	cout << "test 1 in A" << endl;
	}
	
	virtual void test2()=0;

	/*void test2()
	{
	cout << "test 2 in A" << endl;
	}*/

};
class B:public A
{
int y;
public:
	void test1()
	{
	cout << "test 1 in B" << endl;
	}

	void test2()
	{
	cout << "test 2 in B" << endl;
	}

};

main()
{
//A a;
B b;

b.test1();
b.test2();
}
