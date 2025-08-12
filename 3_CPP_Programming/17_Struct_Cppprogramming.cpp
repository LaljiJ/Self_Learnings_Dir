#include<iostream>
using namespace std;
struct one
{
private: 
	int x;
	int y;
	void fun1()
	{
	cout << "function one" << endl;	
	}
public:
	void fun2()
	{
	
	cout << "function two" << endl;
	}

};
main()
{
struct one s;
//cout << s.x << " " << s.y << endl;
s.fun2();

}

