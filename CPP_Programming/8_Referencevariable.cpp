#include<iostream>
using namespace std;
main()
{
int x=100;
int &n=x;

cout << "x=" << x << endl;
cout << "n=" << n << endl;

cout << "&x=" << (unsigned)&x << endl;
cout << "&n=" << (unsigned)&n << endl;


}
