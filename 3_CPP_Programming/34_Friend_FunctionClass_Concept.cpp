#include<iostream>
using namespace std;
class ABC
{
int cash;
int gold;

public:
	void set_data()
	{
	cout << "enter the data" << endl;
	cin >> cash >> gold;
	}
	void get_data()
	{
	cout << "get data" << endl;
	cout << cash << " " << gold << endl;
	}

friend  int main();

};
main()
{

ABC ob;

ob.set_data();
ob.get_data();

cin >> ob.cash;
cin >> ob.gold;

}

