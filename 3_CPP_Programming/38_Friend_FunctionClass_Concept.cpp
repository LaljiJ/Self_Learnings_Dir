#include<iostream>
using namespace std;
class A
{
int cash;
int gold;

public:
	void set_data()
	{
	cout << "enter data" << endl;
	cin >> cash >> gold;
	}
	
	void get_data()
	{
	cout << "get data..." << endl;
	cout << cash << gold << endl;
	}
friend class B;
//friend void get_data1(A a);
};

class B
{
int cash;
int gold;

public: 
	void get_data1(A a)
	{
	cout << a.cash << a.gold << endl;
	}

	void get_data2(A a)
	{
	cout << a.cash << a.gold << endl;
	}

	void get_data3(A a)
	{
	cout << a.cash << a.gold << endl;
	}
};
main()
{
class A a1;
class B b1;

a1.set_data();
a1.get_data();

//b1.set_data();
b1.get_data1(a1);

}

