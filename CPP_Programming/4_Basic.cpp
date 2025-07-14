#include<iostream>
using namespace std;
main()
{
float f;

cout << "enter float number" << endl;
cin >> f;
//cout << fixed;
cout << "f=" << f << endl;
cout << "f2=" << fixed << f << endl;
cout << "f3=" << scientific << f << endl;
}
