#include<iostream>
using namespace std;
class family
{

 int c;
 int g;

public:
	void set()
	{
	cout << "enter the data" << endl;
	cin >> c >> g;
	}
	void get()
	{
	cout << "get data" << endl;
	cout << c << " " << g << endl;
	} 

};


main()
{
class family s;
//cout << s.c << s.g << endl;
s.set();
s.get();


}
