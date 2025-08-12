#include <iostream>
using namespace std;
void swap_data(int *a,int *b)
{
int t;
	t=*a;
	*a=*b;
	*b=t;
}

void swap_data(char *a,char *b)
{
char t;
	t=*a;
	*a=*b;
	*b=t;
}

void swap_data(float *a,float *b)
{
float t;
	t=*a;
	*a=*b;
	*b=t;
}

main()
{

int i1=10,i2=20;
char ch1='a',ch2='b';
float f1=23.5,f2=19.19;

cout << "i1-->	" << i1 << "  " << "i2-->	" << i2 << endl;
cout << "ch1-->	" << ch1 << "  " << "ch2-->	" << ch2 << endl;
cout << "f1-->	" << f1 << "  " << "f2-->	" << f2 << endl;

swap_data(&i1,&i2);
swap_data(&ch1,&ch2);
swap_data(&f1,&f2);

cout << "----------------------------------------" << endl;

cout << "i1-->	" << i1 << "  " << "i2-->	" << i2 << endl;
cout << "ch1-->	" << ch1 << "  " << "ch2-->	" << ch2 << endl;
cout << "f1-->	" << f1 << "  " << "f2-->	" << f2 << endl;
}
