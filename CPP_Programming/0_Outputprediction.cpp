/*
Give all qestions answer
*/

/*
#include<iostream>
using namespace std;
main()
{
	int i=10;
	int &r=i;
	r++;
	int *p=&i;
	p++;
	cout << "i="<< i <<"r="<< r << endl;
}
*/

/*----------------------------------------------------------------------------------------*/

/*
#include<iostream>
using namespace std;
int i=20;
main()
{
	int i=5;
	cout<<i<<::i<<endl;
	{
	int i=10;
	cout<<i<<::i<<endl;
	}
}
*/

/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class abc
{
	int x,y;
	public:
	void set_data(int a,int b)
	{
		x=a,y=b;
	}
};
main()
{
	set_data(10,20);
}
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class ab
{
	int x,y;
	public:
	void set_data(int a,int b)
	{
		x=a,y=b;
	}  
};
main()
{
	ab n;
	n.set_data(10,20,30);
}
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class def
{
	int x,y;
	public:
	void set_data(int a,int b)
	{
		x=a,y=b;
	}
};
main()
{
	def *n;
	n.set_data(10,20);
}
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void set_data(int a,int b)
	{
		x=a,y=b;
	}
};
main()
{
	A n;
	n.a(10,20);
}
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class Test
{
	static int count;
	public:
	static void get_data()
	{
		count++;
	//cout << "count-" << count << endl;	
	}
};
int Test::count=1;
main()
{
	Test t;
	t.get_data();
}
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class sample
{
public:
	void set_data(char c)
	{
		ch=c;
	}
	void get_data()
	{
		cout<<a<<ch<<endl;
	}
private:
	int a;
	char ch;
};
main()
{	sample s;
	s.set_data('A');
	s.get_data();
}
*/


/*----------------------------------------------------------------------------------------*/



/*
#include<iostream>
using namespace std;
class sample
{
public:
	void set_data(char c);
	void get_data();
private:
	int a=10;
	char ch;
};
void sample::set_data(char c)
{
	ch=c;
}
void sample::get_data()
{
	cout<<a<<ch<<endl;
}

main()
{
	sample s;
	s.set_data('A');
	s.get_data();
}
*/



/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class Test
{
private:
	 static int count;
public:
	 static void get_data()
	{
		count++;
	}
};
main()
{
	Test t;
	t.get_data();
}
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
int main()
{
	int x = 5; 
	if(x==5) 
	{ 
		if(x==5) break; 
		cout<<"Hello"; 
	} 
	cout<<"Hi"; 
} 
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream> 
using namespace std; 
int main()
{
	class student {
	int rno =10; 
	} v; 
	cout<<v.rno;
 } 
*/


/*----------------------------------------------------------------------------------------*/


/*
#include <iostream> 
using namespace std; 
namespace first 
{ 
	int var = 5; 
} 
namespace second 
{ 
	double var = 3.1416; 
} 
int main () 
{ 
	int a; 
	a = first::var + second::var; 
	cout << a; 
}
*/



/*----------------------------------------------------------------------------------------*/


/*
#include <iostream> 
using namespace std; 
int main() 
{ 
	const int i = 20; 
	const int* const ptr = &i; 
	(*ptr)++; 
	int j = 15; 
	ptr = &j; 
	cout << i; 
} 
*/


/*----------------------------------------------------------------------------------------*/


/*
#include <iostream> 
using namespace std; 
int main() 
{ 
	int arr[] = { 4, 5, 6, 7 }; 
	int* p = (arr + 1); 
	cout << *arr + 10;  
} 
*/


/*----------------------------------------------------------------------------------------*/


/*
#include <iostream> 
using namespace std; 
int main() 
{ 
	int a = 10, *pa, &ra; 
	pa = &a; 
	ra = a; 
	cout << "a=" << ra; 
	return 0; 
} 
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<cstdio> 
int main() 
{ 
	int a = 35; 
	int b = 12; 
	printf("%d ", ~a); 
	printf("%d ", ~ - b); 
} 
*/


/*----------------------------------------------------------------------------------------*/


/*
#include <iostream> 
using namespace std; 
int main() 
{ 
	char ch='A';
	void *ptr1=&ch; 
	char *ptr2; 
	ptr2 = ptr1;
	cout << ptr2 << " " << ptr1 << endl; 
} 
*/



/*----------------------------------------------------------------------------------------*/


/*
#include <iostream> 
using namespace std; 
int main() 
{ 
	int i; 
	i = 1 + (1,4,5,6,3); 
	cout << i;  
} 
*/


/*----------------------------------------------------------------------------------------*/


/*
#include<iostream>
using namespace std;
class ab
{
	int x,y;
	public:
	void set_data(int x, int y)
	{
		x=x,y=y;
	//cout << x << y << endl;
	} 
 };
main()
{
	ab n;
	n.set_data(10,20);
}
*/


/*----------------------------------------------------------------------------------------*/


/*
#include <iostream> 
using namespace std; 
int main() 
{ 
	int a = b = c = 0; 
	cout << a << " " << b << " " << c;  
}
*/
