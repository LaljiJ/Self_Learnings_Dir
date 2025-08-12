#include<iostream>
using namespace std;
/////////////////////////////////////////////////
class A;
class B
{
int cash;
int gold;

public:
	//friend void A::get_data();

	 void get_data1(A a);
	 void get_data2(A a);
	 void get_data3(A a);

};

class A
{
int cash;
int gold;

public:
	void set_data()
	{
	cout << "enetr data" << endl;
	cin >> cash >> gold;
	}
	
	  void get_data()
	{
	cout << cash << " " << gold << endl;
	}
friend void B::get_data1(A a);
//friend void B::get_data2(A a);
//friend void B::get_data3(A a);

};
//////////////////////////////////////////////////
/*class B
{
int cash;
int gold;

public:
	//friend void A::get_data();

	 void get_data1(A a);
	 void get_data2(A a);
	 void get_data3(A a);

};*/
//////////////////////////////////////
void B::get_data1(A a)
{
cout << a.cash  << " " << a.gold << endl;
}

void B::get_data2(A a)
{
//cout << a.cash  << " " << a.gold << endl;
}

void B::get_data3(A a)
{
//cout << a.cash  << " " << a.gold << endl;
}

//////////////////////////////////////

main()
{
class A a1;
class B b1;

a1.set_data();
a1.get_data();


}
