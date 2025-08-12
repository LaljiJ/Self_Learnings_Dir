#include<iostream>
using namespace std;
class A
{
const int x;
const int y;

public:
	A(); // constructor
	A(int a,int b); // paramiterize constructor
	void get();
};
A::A()//:x(50),y(100)
{
cout << "outsid " << endl;
x=10,y=20;
}
A::A(int a,int b)//:x(a),y(b)
{
cout << "outsize2" << endl;
x=a,y=b;
}
void A::get()
{
cout << x << " " << y << endl;
}

main()
{
class A o1,o2(100,200);
o1.get();
o2.get();
}
