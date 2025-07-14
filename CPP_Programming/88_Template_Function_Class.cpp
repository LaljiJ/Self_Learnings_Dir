#include<iostream>
using namespace std;
template<typename ok1,class ok2>
double swap_data(ok1 a,ok2 b)
{
return a+b;
}
/*
void swap_data(int &a,int &b)
{
int t;
	t=a;a=b;b=t;
}

void swap_data(char &a,char &b)
{
int t;
	t=a;a=b;b=t;
}
void swap_data(float &a,float &b)
{
int t;
	t=a;a=b;b=t;
}*/
main()
{
int n1=10,n2='A';
char c1=10.56,c2='b';
float f1=23.5,f2=1000;

cout << swap_data(n1,n2) << endl;
cout << swap_data(c1,c2) << endl;
cout << swap_data(f1,f2) << endl;
//cout << n1 << " " << n2 << endl;

//swap_data(c1,c2);
//cout << c1 << " " << c2 << endl;

//swap_data(f1,f2);
//cout << f1 << " " << f2 << endl;
 }
