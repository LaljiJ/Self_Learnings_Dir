/*
4.Write a C++ program to define a function with default Arguments. Whenever the function needs default values of arguments, it will prompt the user to enter a default value. Display the values?
*/

// not complete 




#include<iostream>
using namespace std;
int x;
void get()
{
cin >> ::x;
} 
int fun(int a,int b=get())
{
	return a+b;
}
main()
{
//int a=10,b=20;

//fun(a,b);
//cout << a << b << endl;
cout << fun(10,20) << endl;
cout << fun(10) << endl;
}




















/*
void fun(int a,int b);
void fun2(int a,couint c=200);
//void fun(int,int);
main()
{
int a,b;
int c;
//
cout << "enter the a & b" << endl;
cin >> a >> b;

fun(a,b);
cout << a << b << endl;
//

cout << "enter the a" << endl;
cin >> a;

fun2(a);
cout << a << c << endl;

}
void fun(int a,int b)
{

}
void fun2(int a,int c)
{

}

*/
