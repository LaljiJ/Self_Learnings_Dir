#include<iostream>
using namespace std;
class A
{
int x;
public:
	A()
	{
	throw 100;
	cout << "constructo" << endl;
	}
	~A()
	{
	cout << "destructor" << endl;
	}


};
main()
{

try
{
	A obj;
}
catch(int a)
{
	cout << "a-" << a<< endl;
}

}
