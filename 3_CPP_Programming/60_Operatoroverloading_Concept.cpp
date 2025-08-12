#include<iostream>
using namespace std;
class A
{
int a[5];

public:
	A()
	{
	}	
	
	~A()
	{
	}

	/*void get_data()
	{
	cout << "x- " << x << " " << "y- " << y << endl; 
	}
	*/
	int& operator [](int index)
	{
	return a[index];
	}

};
main()
{
class A a1;

for(int i=0;i<5;i++)
cin >> a1[i];
	
for(int i=0;i<5;i++)
cout << a1[i] << " " << endl;


}

