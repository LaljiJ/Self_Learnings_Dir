#include<stdio.h>
main()
{
int a[5];
int i,ele,j,k,c;


ele=sizeof (a)/sizeof a[0];
printf("enter num..\n");

for(i=0;i<ele;i++)
scanf("%d",&a[i]);


for(k=0,c=0;k<ele;k++)
	{

	for(j=2;j<a[i];j++)
	{
	if(a[i]%j==0)
	break;
	}
	if(a[i]==j)
	c++;

	}

printf("%d",c);




}
