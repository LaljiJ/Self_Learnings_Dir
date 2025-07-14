/*
1.Write a C++ program to swap two variables using function. (Don't use Pointers).
*/

#include<iostream>
using namespace std;
void swap_data(int &n1,int &n2);
main()
{
int a,b;


cout << "enter the data" << endl;
cin >> a >> b;

swap_data(a,b);
cout << a  << " " << b << endl;

}
void swap_data(int &n1,int &n2)
{
int t;
	t=n1;
	n1=n2;
	n2=t;
}

