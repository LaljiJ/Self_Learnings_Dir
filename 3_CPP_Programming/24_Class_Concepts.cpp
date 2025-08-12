#include<iostream>
using namespace std;
class family
{
 int c;
 int g;

public:

	void set(family *const this)
	{
	cin >> this->c >> this->g;
	
	}
	void get(family *const this)
	{
	cout << "get data" << endl;
	cout << this->c << " " << this->g << endl;
	} 
};

main()
{
class family s;
//cout << s.c << s.g << endl;
family::set(&s);
family::get(&s);


}
