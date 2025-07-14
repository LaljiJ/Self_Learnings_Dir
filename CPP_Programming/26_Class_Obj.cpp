#include<iostream>
using namespace std;
class family
{
int cash;
int gold;
	
public:
	void set_data();
	void get_data();

};
void family::set_data()
{
cout << "enter the data" << endl;
cin >> cash >> gold;
}
void family::get_data()
{
cout << "given data" << endl;
cout << cash << " " << gold << endl;
}

main()
{
class family ob1;

ob1.set_data();
ob1.get_data();

}
