#include<iostream>
using namespace std;
class family
{
int cash;
int gold;
	
public:
	void set_data(int a,int b);
	void get_data();

};
void family::set_data(int a,int b)
{
//cout << "enter the data" << endl;
//cin >> cash >> gold;
cash=a;
gold=b;
}
void family::get_data()
{
cout << "given data" << endl;
cout << cash << " " << gold << endl;
}

main()
{
family ob1;

ob1.set_data(100,200);
ob1.get_data();

}
