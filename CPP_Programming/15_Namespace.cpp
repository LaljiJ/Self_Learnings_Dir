#include<iostream>
using namespace std;
namespace ONE
{
	int accno=1234;
	char s[20]={"hiiiiii-1"};
	string s1("hiiiiii-2");
	void first()
	{
	cout << "function ONE" << endl;
	}
}
namespace ONE
{
	int accno=20;
	char s[20]={"helllloooo-1"};
	string s1("hellloooo-2");
	void first()
	{
	cout << "funsction two" << endl;
	}
}
main()
{
	{
	using  ONE::accno;
	using  ONE::s;
	using  ONE::s1;
	using  ONE::first;
cout << accno << endl << s << endl << s1 << endl << endl;
first();
	}

	{
	using  ONE::accno;
	using  ONE::s;
	using  ONE::s1;
	using  ONE::first;
cout << accno << endl << s << endl << s1 << endl << endl;
first();
	}


}
