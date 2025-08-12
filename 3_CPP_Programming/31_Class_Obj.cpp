#include<iostream>
using namespace std;
class Complex
{
int real;
int img;
	
public:
	void set_data(int r,int i)
	{
	real=r,img=i;	
	}
	void get_data()
	{
	cout << "complex nmu" << endl;

	if(img<0)
	cout << real << img << "j" << endl;
	else
	cout << real << "+" << img << "j" << endl;
	}

	Complex addition1(Complex ob1)
	{
	Complex result;
	
	result.real=real+ob1.real; 
	result.img=img+ob1.img; 
	
	return result;
	}

};

main()
{
Complex o1,o2;

o1.set_data(10,20);
o1.get_data();

o2=o1.addition1(o1);
o2.get_data();


}
