#include <iostream>
#include <typeinfo>
using namespace std;
template <class type1,class type2>
void swap_data(type1 *a,type2 *b)
{

type1 t;
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
