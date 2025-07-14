#include<iostream>
using namespace std;
template<class tp1>
double area(tp1 a)
{
return 3.14*a*a;
}
template<typename tp1,class tp2>
double area(tp1 a,tp2 b)
{
return a*b;
}
main()
{

cout << area(10) << endl;
cout << area(10,15) << endl;
cout << area(10.5,1) << endl;
cout << area(10,12.5) << endl;

}
