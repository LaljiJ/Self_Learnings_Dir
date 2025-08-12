#include<iostream>
using namespace std;
namespace SBI
{
	int accno=1234;
	char s[20]={"hiiiiii-1"};
	string s1("hiiiiii-2");
	void first()
	{
	cout << "function ONE" << endl;
	}
}
namespace AXIS
{
	int accno=20;
	char s[20]={"helllloooo-1"};
	string s1("hellloooo-2");
	void first()
	{
	cout << "funsction two" << endl;
	}
}
namespace HDFC
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
	using  SBI::accno;
	using  SBI::s;
	using  SBI::s1;
	using  SBI::first;
cout << accno << endl << s << endl << s1 << endl << endl;
first();
	}

	{
	using  AXIS::accno;
	using  AXIS::s;
	using  AXIS::s1;
	using  AXIS::first;
cout << accno << endl << s << endl << s1 << endl << endl;
first();
	}


	{
	using  HDFC::accno;
	using  HDFC::s;
	using  HDFC::s1;
	using  HDFC::first;
cout << accno << endl << s << endl << s1 << endl << endl;
first();
	}




}
