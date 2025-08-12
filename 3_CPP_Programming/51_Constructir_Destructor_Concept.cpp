#include<iostream>
using namespace std;
class ABC
{
public:
	ABC()
	{
	cout << "cons-" << (unsigned)this<< endl;
	}
	~ABC()
	{
	cout << "dest-" << (unsigned)this << endl;
	}

};
main()
{
ABC a1,a2,a3;

cout << "a1-" << (unsigned)&a1 << endl;
cout << "a2-" << (unsigned)&a2 << endl;
cout << "a3-" << (unsigned)&a3 << endl;

cout << "a1-" << &a1 << endl;
cout << "a2-" << &a2 << endl;
cout << "a3-" << &a3 << endl;
}

