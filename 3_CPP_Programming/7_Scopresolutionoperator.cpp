#include<iostream>
using namespace std;
int x=10;
main()
{
int x=500;
{
int x=100;
cout << "locl=" << x << endl;
cout << "global=" << ::x << endl;
}
}
