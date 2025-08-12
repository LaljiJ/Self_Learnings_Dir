#include <iostream>
using namespace std;
template<class type>
double sum(type a)
{
return 3.14*a*a;
}
/*-------------------------*/
template<class type1,class type2>
double sum(type1 a,type2 b)
{
return a+b;
}
/*------------------------*/
main()
{

cout << sum(10,20) << endl;; 
cout << sum(12) << endl;
}
