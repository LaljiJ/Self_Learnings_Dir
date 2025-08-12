#include<iostream>
using namespace std;
struct one
{
private:
	int x;
	int y;
public:
	void test()
	{
	cout <<"enter the data" <<endl;
	cin >>x>>y;
	cout << x<<y<<endl;
	}
	void get()
	{
	cout << x<<y<<endl;
	}
};
main()
{
struct one s1;
//cout << sizeof(s1)<<endl;
//cout << s1.x << s1.y << endl;
s1.test();
s1.get();


}
