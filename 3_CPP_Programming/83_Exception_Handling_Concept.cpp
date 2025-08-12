#include<iostream>
using namespace std;
int dived(int n1,int n2)
{
	if(n2==0)
	throw "error";
	else
	throw n1/n2 ;


}
main()
{
int n1,n2,tp;

cout << "enter n1 & n2" << endl;
cin >> n1 >> n2;

try
{
tp=dived(n1,n2);
cout << "res-" << tp << endl;
}
catch(const char *s)
{
cout << s << endl;
}


}
