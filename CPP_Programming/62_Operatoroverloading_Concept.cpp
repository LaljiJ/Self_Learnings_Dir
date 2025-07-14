/*

<< >> overloadind

*/


#include<iostream>
using namespace std;
class A
{
int x,y;

public:
		
	friend istream& operator >> (istream&,A&);
	friend ostream& operator << (ostream&,A);
	
	

};
	istream& operator >> (istream& in ,A &b1)
	{
	in >> b1.x >> b1.y;
	return in;
	}

	ostream& operator << (ostream &out ,A b1)
	{
	out << b1.x << b1.y;
	return out;
	}

main()
{
A a1,a2;

cin >> a1 >> a2;
cout << a1 << a2;

}
