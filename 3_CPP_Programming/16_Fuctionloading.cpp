#include<iostream>
using namespace std;
int sum(int a,int b=500)
{
	return a+b;
}
float sum(float a,int b)
{
	return a+b;
}
main()
{

cout << sum(10,20) << endl;
cout << sum(10) << endl;
cout << sum(10.54f,20) << endl;


}
//int sum(int a,int b=500) 
