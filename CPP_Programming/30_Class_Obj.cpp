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
	
	void addition(Complex ob1,Complex ob2 )
	{
	cout << "call by valu" << endl;
	real=ob1.real+ob2.real;
	img=ob1.img+ob2.img;
	}

	
	void addition2(Complex *ob1,Complex *ob2 )
	{
	cout << "coall by addres" << endl;
	real=ob1->real+ob2->real;
	img=ob1->img+ob2->img;
	}
	

	void addition3(Complex &ob1,Complex &ob2 )
	{
	cout << "coall by reffrence" << endl;
	real=ob1.real+ob2.real;
	img=ob1.img+ob2.img;
	}

};
main()
{
class  Complex ob1,ob2,ob3,ob4,ob5;

ob1.set_data(10,20);
ob1.get_data();

ob2.set_data(10,-50);
ob2.get_data();

ob3.addition(ob1,ob2);
ob3.get_data();

ob4.addition2(&ob1,&ob2);
ob4.get_data();

ob5.addition3(ob1,ob2);
ob5.get_data();

}

