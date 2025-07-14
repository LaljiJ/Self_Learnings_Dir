/*
5. Write a C++ programe with the Employee class that creates five employees; sets their Age, Year of Service, and Salary; provide  a method of Employee that reports how many  thousands of rupees the            employee earns, rounded to the nearest Rs.80,000/-.
*/


#include<iostream>
using namespace std;
class emp
{
char name[20];
int age;
int year;
int sal;

public:
	void set_data()
	{
	cout << "enetr the employ name" << endl;
	cin >> name >> age >> year >> sal;
	}
	void get_data()
	{
		if(sal>=75000 && sal<=85000)
		{
		cout << "## output ##" << endl;
		cout << "--------------" << endl;
		cout << name << endl;
		cout << age << endl;
		cout << year << endl;
		cout << sal << endl; 
		}
	}
	

};

main()
{
class emp e1[5];
int i;

for(i=0;i<5;i++)
e1[i].set_data();


for(i=0;i<5;i++)
e1[i].get_data();



}
