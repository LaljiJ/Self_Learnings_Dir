#include<iostream>
#include<cstdlib>
using namespace std;
void user()
{
string p;
	cout << "Enter Name" << endl;
	cin >> p;

	cout << "Hii I am:" << p << endl;
	sleep(3);
	cout << "Bhikho : Ha to Ema su Thayu" << endl;
	sleep(3); 
	cout << p << " :Maru Net Gayu Bhikha" << endl;
	sleep(2);
	cout << "Bhikho: Coustemar care ma call kar Eni Mane" << endl;
	sleep(2);
	cout << p << " :Le Karyo" << endl;
	cout << p << " :Name na bolto bhikha" << endl; 
	sleep(3);
	throw "E Medam Maru NetGayu Em Na Hale kay Ch**di**ni"; 
	

}

void care()
{

	try
	{
		user();
	}
	catch(const char *s)
	{
	cout << "Hii I am Shantabai" << endl;
	sleep(2);
	cout << "Bol Su Vandho Avyo" << endl;
	sleep(3);
	cout <<  "User : E Medam Mapp Ma hooo" << endl;
	cout << "User: " << s << endl;
	sleep(3);
	cout << "Shantabai Kak Karu lyo" << endl;
	sleep(5);
	cout << "Shantabi : E Bhai Mara thi nahi thay" << endl;
	cout << "shantabi : Manager ne mokalu tamaro problem" << endl;
	sleep(5);
	cout << "shantabi : mokali didho" << endl;
	throw s;
	}


}
main()
{
	try
	{
	care();
	}
	catch(const char *s1)
	{
	cout << "I Am Manager" << endl;
	cout << "User : Haaa to Le Ne Maro" << endl;
	sleep(3);
	cout << "Manager : Tell me your problem" << endl;
	sleep(3);
	cout << "User : " << s1 << endl;	
	sleep(3);
	cout << "Manager : Sir Eva Word Na bolo   Hu Gujarati j chu" << endl;
	cout << "Tamaro Problem Kari dav Solve " << endl;
	sleep(8);
	cout << "manager : Thay Gayo Solve and have Call karo to Mari gayo Lo**d" << endl;
	cout << "Rakkh" << endl;
	}

}

