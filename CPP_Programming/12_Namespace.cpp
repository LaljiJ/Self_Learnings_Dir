#include<iostream>
using namespace std;
namespace one
{
int x=10;
	void first()
	{
	cout << "function one" << endl;
	}
}
namespace two
{
int x=20;
	void first()
	{
	cout << "funsction two" << endl;
	}
}
main()
{
using namespace one;
cout << x << endl;
first();
}
