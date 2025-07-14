#include<iostream>
using namespace std;
//////////////////////////////
class wife;
class husband
{
char name[20];
float sal;

public:
	void set_data()
	{
	cout << "enetr husband data" << endl;
	cin >> name >> sal;
	}
	
	void get_data()
	{
	cout << "get data..." << endl;
	cout << name << sal << endl;
	}

friend void income_tax(husband h,wife w);
//friend int main();
};
//////////////////////////////
class wife
{
char name[20];
float sal;

public:
	void set_data()
	{
	cout << "enetr wife data" << endl;
	cin >> name >> sal;
	}


	void get_data()
	{
	cout << "get data..." << endl;
	cout << name << sal << endl;
	}

};
//////////////////////////////
void income_tax(husband h,wife w)
{
float total_sal;

	total_sal=h.sal+w.sal;
	
	if(total_sal>=50000)
	cout << "pay tax 1000" << endl;
	else
	cout << "i will catch you" << endl;
}


//////////////////////////////
main()
{
class husband h1;
class wife w1;

h1.set_data();
h1.get_data();
w1.set_data();
w1.get_data();
//income_tax(h1,w1);

}
