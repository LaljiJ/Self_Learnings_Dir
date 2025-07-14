/*
7. Write a C++ program to define a class called Student with data members as roll, name and marks. Define the appropriate member functions, 1)setdata 2)display for reading and displaying the data and also define a 	member function called sort to sort 5 students records according to roll, name & marks.
*/


#include<iostream>
#include<cstring>
using namespace std;
////////////////////////////////
class student
{
int *roll;
string name;
float *mark;


int temp;
char temp2;
float temp3;


int num,i,j,num1;

public:
//////////////////////////////////////////////////////////////
	student()
	{
	cout << "constructor call" << endl;
	roll=new int[50];
//	name=new string;
	mark=new float[50];
	}
///////////////////////////////////////////////////////////////
	~student()
	{
	cout << "destructor call" << endl;
	delete roll;
//	delete name;
	delete mark;
	}
///////////////////////////////////////////////////////////////////
	void set_data()	
	{
	cout << "how many stduent you want" << endl;
	cin >> num;
	
	cout << "enter student detail \n1) roll no.\n2) name\n3)marks" << endl;
	//roll=new int[num];
	//name=new char[num];
	//mark=new float[num];

	for(i=0,j=1;i<num;i++,j++)
	{
	cout << "enter " << j << "student detail" << endl; 
	cin >> roll[i]; 
	//cin >> name[i];
	//cin.getline(name[i]);
	getline(cin,name);
	cin >> mark[i]; 
	}
	
	}
///////////////////////////////////////////////////////////////////////
	void get_data()
	{
	cout << "## given data ##" << endl;
	
	for(i=0;i<num;i++)
	{
	cout << roll[i] << "\n" << name[i] << "\n" << mark[i] << endl;
	cout << "-------------" << endl;
	}
	}
//////////////////////////////////////////////////////////////////////////

	void sort()
	{
	cout << "enetr short option...\n1)roll no wise\n2)name wise\n3)mark wise" << endl;
	cin >> num1;	
	switch(num1)
	{
		case 1:	for(int i=0;i<num;i++)
			{
			   for(int j=i+1;j<num;j++)
			   {
				if( roll[i] >  roll[j])
				{
				temp=roll[i];
				roll[i]=roll[j];
				roll[j]=temp;
				
				temp2=name[i];
				name[i]=name[j];
				name[j]=temp2;	
				
				temp3=mark[i];
				mark[i]=mark[j];
				mark[j]=temp3;
				}		
			   }
			}
			break;
	
	}
	cout << " ## short  ## " << endl;
	cout << "------------------------" << endl;
	for(i=0;i<num;i++)
	{
	cout << roll[i] << "\n" << name[i] << "\n" << mark[i] << endl;
	cout << "-----------------------" << endl;
	}
	}

};
///////////////////////////////
main()
{
class student s1;

s1.set_data();
s1.get_data();
s1.sort();
}






























/*
#include<iostream>
using namespace std;
class STD
{
int roll;
char name[20];
float mark;

public:
	/////////////////////////
	void fun1()
	{
	cout << "1) set data" << endl;
 	int num;
	cin >> num;
	}
	/////////////////////////////
	void function1()
	{
	int num;
		
		if(num==1)	
		{
		cout << "---enter student detail "  << endl;
		cout << "(1) enter roll no.  (2) enter name.  (3) enter mark." << endl;
		cin >> roll >> name >> mark;
		}
	}
	/////////////////////////
	void fun2()
	{
	int num;
	cout << "2) display data" << endl;
	cin >> num;
	}
	///////////////////////////
	void function2()
	{
	int num;
	
		if(num==2)
		{
		cout << "------------" << endl;
		cout << roll << endl;
		cout << name << endl;
		cout << mark << endl;
		}
	}
	////////////////////////////
	void shortdata()
	{
	int num;
	
	cout << "-1) roll no wise " << endl;
	cout << "-2) name wise " << endl;
	cout << "-3) mark no wise " << endl;
	cin >> num;		
		if(num==1)
		{
		int i,j,temp;
		   for( i=0;i<5;i++)
		   {
			for(j=i+1;j<5;j++)
			{
			  if(STD s3.roll>STD s3.roll)
			  {
			  temp=i;
			  i=j;
			  j=i;	
			  }
			}
		   }
		
		//cout << "print" << endl;
		//for(i=0;i<5;i++)
		//cout << roll[i] << endl;
		}
	
	//cout << "print" << endl;
	//cout << roll << endl;
	}
		

};



main()
{
//////  sacnig & printing ////////////
STD s1,s2[5],s3;

s1.fun1();
for(int i=0;i<5;i++)
s2[i].function1();

s1.fun2();
for(int i=0;i<5;i++)
s2[i].function2();
//////////////////////////////
s3.shortdata();

}



7. Write a C++ program to define a class called Student with data members as roll, name and marks. Define the appropriate member functions, 1)setdata 2)display for reading and displaying the data and also define a 	member function called sort to sort 5 students records according to roll, name & marks.


*/

