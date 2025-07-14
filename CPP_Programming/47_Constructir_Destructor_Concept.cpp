#include<iostream>
using namespace std;
class A
{
int x;
int y;

public:
	A();
	A(int a,int b);
	A(A&);
	void get_data();
	
};
//////////////////////////////////
A::A():x(10),y(20)
{
cout << "defult" << endl;
}
////////////////////////
A::A(int a,int b):x(a),y(b)
{
cout << "paramiterize" << endl;
}
////////////////////////////////////
A::A(A& temp):x(temp.x),y(temp.y)
{
cout << "copyyyy" << endl;
}
/////////////////////////////////
void A::get_data()
{
cout << x << "- " << y << endl;
}
/////////////////////////////////
main()
{
class A o1,o2(1000,2000),o3(o2),o4=o3;
A o5;
o1.get_data();
o2.get_data();
o3.get_data();
o4.get_data();

o5.get_data();



}
