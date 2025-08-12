#include<stdio.h>
main()
{

int a[5],ele,j,larg,sec,i;

ele=sizeof(a)/sizeof(a[0]);

printf("enter number...\n");

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

if(a[0]>a[1])
{
	larg=a[0];
	sec=a[1];
}
else if(a[0]<a[1])
{
	larg=a[1];
	sec=a[0];
}

for(j=2;j<ele;j++)
{
	if(a[j]>larg)
	{
	sec=larg;
	larg=a[j];
	}
	else if(a[j]<larg)
	{
	sec=a[j];
	}
}

printf("larg=%d sec=%d\n",larg,sec);


}
