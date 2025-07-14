#include<iostream>
using namespace std;
class A
{
public:
	virtual void test()
	{
	cout << "test A" << endl;
	}
	virtual void test2()=0;
};
class B:protected A
{
public:
	void test()
	{
	cout << "test B" <<endl;
	}
	void test2()
	{
	cout << "yes" << endl;
	}
};
main()
{

/*
A *p;
B b;
p=&b;
p->test();
*/
}
