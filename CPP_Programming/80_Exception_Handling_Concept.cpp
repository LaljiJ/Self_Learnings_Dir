#include <iostream>
using namespace std;
class A
{
char s[100];
int i;
float f;
public:
	A()
	{
	//char s[500];
	cout << "enter the string" << endl;
	cin >> s;
	cout << "enter int" << endl;
	cin >> i;
	cout << "enter the flotat" << endl;
	cin >> f;

	throw f;
	throw i;
	throw s;
	}

};
main()
{

try
{
A a;
}
catch(...)
{

}
catch(const char *s)
{
cout << "in main --> " << s << endl;
}
catch(int a)
{
cout << "int main --> " << a << endl;;
}
catch(float b)
{
cout << "int main --> " << b << endl;;
}
/*catch(...)
{
cout << "default --> " << endl;
}*/

}
