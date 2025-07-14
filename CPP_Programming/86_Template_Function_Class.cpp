#include <iostream>
using namespace std;
template<class type>
class A
{
type a[5];
public:
	void set_data()
	{
	cout << "enter the data" << endl;
	for(int i=0;i<5;i++)
	cin >> a[i];
	}

	void get_data()
	{
	cout << "uotput" << endl;
	for(int i=0;i<5;i++)
	cout << "--> " << a[i] << endl; 
	}
};
main()
{

//A <int> obj;
//A <char> obj;
A <float> obj;
obj.set_data();
obj.get_data();

}
