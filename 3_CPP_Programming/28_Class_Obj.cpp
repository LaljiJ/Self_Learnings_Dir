#include<iostream>
using namespace std;
class A
{
int x,y;

public:
	void set_data()
	{
	cin >> x >> y;
	}
	void get_data()
	{
	cout << x << " " << y << endl;
	}
};
main()
{
A ob;

ob.set_data();
ob.get_data();


}
