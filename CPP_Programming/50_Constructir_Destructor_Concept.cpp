#include<iostream>
#include<cstring>
using namespace std;
class ABC
{
char *name;

public:
	ABC()
	{
	cout << "constructor" << endl;
	name=new char[20];
	strcpy(name,"vector india");
	}
	~ABC()
	{
	cout << "desturctor" << endl;
	delete name; // memory not leaked
	}

};
main()
{
ABC a1;

}

