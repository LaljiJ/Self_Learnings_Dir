/*
WAP to find the perfect number of given array. than find the sum of perfect number , thna result is armstron or not
EX:
496,496,496,28,28,28,28,28,6 is perfect  
all perfect sum is 1634 
1634 is armstrong....
*/


#include<iostream>
using namespace std;
main()
{
int n;
cout << "enter n..." << endl;
cin >> n;
///////////////////////////////////
int *p;

p=new int[n];
////////////////////////////////////
int i;

cout << "enetr the element" << endl;
for(i=0;i<n;i++)
cin >> p[i];

cout << "given data" << endl;
for(i=0;i<n;i++)
cout << p[i] << " ";
cout <<endl;

cout << "## output ##" << endl;
////////////////////////////////////
int j,sum,sum2;

for(i=0,sum2=0;i<n;i++)
{
	for(j=1,sum=0;j<p[i];j++)
	{
		if(p[i]%j==0)
		{
		sum=sum+j;
		}
	
	}
	if(sum==p[i])
	{
	cout <<  sum << " " << endl;
	sum2=sum2+sum;
	}

}
cout << "perfectno sum- " << sum2 << endl;
//////////////////////////////////////////////////////

int k,mul,u;
int c=0,sum3;

u=sum3=sum2;

	for(sum2;sum2;sum2=sum2/10)
	{
	if((sum2%10==0)||(sum2%10!=0))
	c++;
	}
cout << "c- " << c << endl;
////////////////////////////////////////////////////
	if(c==1)
	{
		for(sum3;sum3;sum3=sum3/10)
		{
		k=sum3%10;
		mul=mul+k;
		}
	if(mul==sum3)
	cout << "yes armstrong" << endl;
	else
	cout << "not armstorng" << endl;
	}
	
////.....
	else if(c==2)
	{
		for(sum3;sum3;sum3=sum3/10)
		{
		k=sum3%10;
		mul=mul+k*k;
		}
	if(mul==sum3)
	cout << "yes armstrong" << endl;
	else
	cout << "not armstorng" << endl;
	}
	
////....
	else if(c==3)
	{
		for(sum3;sum3;sum3=sum3/10)
		{
		k=sum3%10;
		mul=mul+k*k*k;
		}
	if(mul==sum3)
	cout << "yes armstrong" << endl;
	else
	cout << "not armstorng" << endl;
	}
	
////....
	else if(c==4)
	{
		for(sum3,mul=0;sum3;sum3=sum3/10)
		{
		k=sum3%10;
		mul=mul+k*k*k*k;
		}
	cout << "mul=" << mul <<  "  sum= " << u << endl;
	if(mul==u)
	cout << "yes armstrong" << endl;
	else
	cout << "not armstorng" << endl;
	}

}





