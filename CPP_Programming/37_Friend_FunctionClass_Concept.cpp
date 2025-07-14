#include<iostream>
using namespace std;
class XYZ;
class ABC
{
int cash;
int gold;

public: 
	void set()
	{
	cout << "enter ABC data" << endl;
	cin >> cash >> gold;
	}
	void get()
	{
	cout << "get data"  << endl;
	cout << cash << " " << gold << endl;
	}

friend void money(ABC o,XYZ p);
};
////////////////////////////////////////
class XYZ
{
int cash;
int gold;

public: 
	void set()
	{
	cout << "enter XYZ data" << endl;
	cin >> cash >> gold;
	}
	void get()
	{
	cout << "get data"  << endl;
	cout << cash << " " << gold << endl;
	}

friend void money(ABC o,XYZ p);
};
///////////////////////////////////////
void money(ABC o,XYZ p)
{
int total;
	total=o.cash+p.gold;
	cout << "total- " << total << endl;
	
}
//////////////////////////////////////
main()
{
class ABC o1;
class XYZ p1;

o1.set();
o1.get();

p1.set();
p1.get();

}








