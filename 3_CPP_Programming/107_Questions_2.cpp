/*
2.Write a C++ program to swap two integers, floats and characters using function Overloading
*/

#include<iostream>
using namespace std;
void swap_data(int &n1,int &n2);
void swap_data(char &n1,char &n2);
void swap_data(float &n1,float &n2);
main()
{
/*
int i1=10,i2=20;
char ch1='a',ch2='b';
float f1=23.5,f2=33.5;
*/

int i1,i2;
char ch1,ch2;
float f1,f2;

cout << "enetr the integer value" << endl;
cin >> i1 >> i2;

swap_data(i1,i2);
cout << i1 << " " << i2 << endl;
///////////////////////////////////////
cout << "enetr the char" << endl;
cin >> ch1 >> ch2;

swap_data(ch1,ch2);
cout << ch1 << " " << ch2 << endl;
////////////////////////////////////
cout << "enetr the float value" << endl;
cin >> f1 >> f2;

swap_data(f1,f2);
cout << f1 << " " << f2 << endl;
//cout << "..........." << endl;

//swap_data(i1,i2);
//cout << i1 << " " << i2 << endl;

//swap_data(ch1,ch2);
//cout << ch1 << " " << ch2 << endl;

/*
swap_data(f1,f2);
cout << f1 << " " << f2 << endl;
*/
}
void swap_data(int &n1,int &n2)
{
int t;
	t=n1;
	n1=n2;
	n2=t;	
}
void swap_data(char &n1,char &n2)
{
char t;
	
	t=n1;
	n1=n2;
	n2=t;	
}
void swap_data(float &n1,float &n2)
{
float t;
	
	t=n1;
	n1=n2;
	n2=t;	
}

