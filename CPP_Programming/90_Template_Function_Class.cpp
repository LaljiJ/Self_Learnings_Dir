#include<iostream>
using namespace std;
template<class tp1,tp2>
class A
{
tp1 a[5];

public:
	void set_data(tp1,tp2);
	void get_data();

};
	template<class tp1,class tp2>
	void A<tp1,tp2>:: set_data()
	{
	cout << "set" << endl;
	for(int i=0;i<5;i++)
	cin >> a[i];
	}
	template<typename tp1,class tp2>
	void A<tp1,tp2>::get_data()
	{
	cout << "get" << endl;
	for(int i=0;i<5;i++)
	cout << a[i] << " " << endl;;
	}
main()
{
A <int>ob(10,20);
A <char>ob1(23.5,'A');
A <float>ob2(12,23.5);
ob.set_data();
ob.get_data();

ob1.set_data();
ob1.get_data();

ob2.set_data();
ob2.get_data();
}
