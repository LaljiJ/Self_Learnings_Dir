#include<iostream>
using namespace std;
main()
{
try
{
	throw "yes";
	throw 10;
	throw 10.5;
}

catch(...)
{
	cout << "default" << endl;
}
catch(const char *s)
{
	cout << s << endl;
}
catch(int a)
{
	cout << a << endl;
}
catch(double k)
{
	cout << k << endl;
}
/*catch(...)
{
	cout << "default" << endl;
}
*/
}
