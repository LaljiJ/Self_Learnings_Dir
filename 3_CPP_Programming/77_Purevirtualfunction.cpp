#include <iostream>
using namespace std;
class A
{
public:
	void test1()
	{
	cout << "test 1 in A" << endl;
	}
	virtual void test2()=0;

};

class B:public A
{
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

class C:public A
{
public:
	void tets1()
	{
	cout << "test 1 in C" << endl;
	}

	void test2()
	{
	cout << "test 2 in C" << endl;
	}
};

class D
{
public:
	void test1()
	{
	cout << "test 1 in D" << endl;
	}

};

main()
{

//A a;
//B b;
C c;
//D d;
c.test1();
c.test2();

}
