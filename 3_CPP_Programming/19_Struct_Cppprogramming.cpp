#include<iostream>
using namespace std;
struct one
{
private:
	int x;
	int y;
	void test()
	{
	cout <<"enter the data" <<endl;
	}
public:
	void get()
	{
	test();
	}
};
main()
{
struct one s1;
//s1.test();
s1.get();


}
