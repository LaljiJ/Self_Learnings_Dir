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
namespace TWO
{
	int accno=20;
	char s[20]={"helllloooo-1"};
	string s1("hellloooo-2");
	void first()
	{
	cout << "funsction two" << endl;
	}
}
/*
using namespace ONE;
using namespace ONE;
using namespace ONE;
using namespace ONE;
using namespace ONE;
*/
//using namespace TWO;
main()
{
	{
	using namespace ONE;

	cout << accno << " " << s1 << " " << s << " " <<  endl;
	first();
	}
{
using namespace TWO;

cout << accno << " " << s1 << " " << s << " " <<  endl;
first();
}
//first();
}
