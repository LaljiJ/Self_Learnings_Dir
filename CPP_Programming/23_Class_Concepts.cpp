#include<iostream>
using namespace std;
class family
{

 int c;
 int g;

public:
	void set(int,int);
	void get();
};

	void family::set(int a,int b)
	{
	c=a;
	g=b;
	}
	void family::get()
	{
	cout << "get data" << endl;
	cout << c << " " << g << endl;
	} 


main()
{
class family s;
//cout << s.c << s.g << endl;
s.set(100,200);
s.get();


}
