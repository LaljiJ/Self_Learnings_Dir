/*
24. Write a C++ program to Overload [ ] operator.
*/


#include<iostream>
using namespace std;
class A
{
int x[5];
public:
	A()
	{
	cout << "constructor" << endl;
	}
	int& operator [](int a)
	{
	return x[a];
	}

};

main()
{
A ob;
	
for(int i=0;i<5;i++)
cin >> ob[i]; //cin.operator []();



}

