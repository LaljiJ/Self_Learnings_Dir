#include<iostream>
using namespace std;
main()
{
int **p;
int i;
p=new int*[5];
for(i=0;i<5;i++)
 p[i]=new int[3];


for(i=0;i<5;i++)
delete  []p[i];

delete p;




}
