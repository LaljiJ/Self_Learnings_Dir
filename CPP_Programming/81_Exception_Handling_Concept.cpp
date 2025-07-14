#include <iostream>
using namespace std;
int func(int,int);
main()
{
int num1,num2,div;

cout << "enter the number..." << endl;
cin >> num1 >> num2;

cout << "num1--> " << num1 << endl;
cout << "num2--> " << num2 << endl;

try
{
div=func(num1,num2);
cout << "div--> " << div << endl;
}
catch(const char *s)
{
cout << s << endl;
}
catch(int a)
{
cout << a << endl;
}

}

int func(int a,int b)
{
int div;
	
	
		if(b==0)
		throw "Flothing Point Not Put Zero";
		else
		return div=a/b;
	
}
