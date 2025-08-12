/*
6. Write C++ program to calculate simple interest. Define the class called interest and hide the data elements of 	the class using private keyboard. Define the setdata member function to read the data through keyboard and 	define the print member function outside the class.
	Formulae : interest = (P * N * R) / 100;
	Total_amount = interest + P;
	here,  	P -> Principle amount
       	  	 N -> Period (No.of years)
          		R -> rate of interest
*/


#include<iostream>
using namespace std;
class interest
{
//private:
	int p;
	int n;
	int r;
	
public:
	void set_data()
	{
	cout << "enter the p (amount)" << endl;
	cin >> p;
	cout<<"enter the n (no of year)"<<endl;
	cin >> n ;
	cout<<"eneter the r (rate of interest)"<<endl;
	cin>> r;
	}
	
	void get_data();

};
	
	void interest::get_data()
	{
	
	int interest,total;
	//  	interest=(interest.a1.p*a1.n*a1.r)/100;
	//	interest=(interest::p*interest::n*interest::r)/100;
	//	cout << "intterest - " << interest << endl;
	interest=(p*n*r)/100;
	cout<< "interest - " << interest << endl;
	
	total=interest+p;
	cout << "total amount - " << total << endl;
	}
main()
{
class interest a1;

a1.set_data();
a1.get_data();

}








