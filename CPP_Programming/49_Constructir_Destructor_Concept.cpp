#include<iostream>
using namespace std;
class ABC
{

public:
	ABC() 
	{
	cout << "constructor" << endl;
	}
	~ABC()
	{
	cout << "destructor" << endl;
	
	}
};

main()
{
ABC a1;

}

