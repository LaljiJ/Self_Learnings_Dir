#include <iostream>
using namespace std;
template<class type1,class type2>
double sum(type1 a,type2 b)
{

return a+b;

}

main()
{

cout << sum(10,20) << endl;
cout << sum(10,12.23) << endl;
cout << sum(10,'a') << endl;

}
