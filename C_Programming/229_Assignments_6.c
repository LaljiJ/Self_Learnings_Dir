/*
7) Write a C program to insert an element at desired position in an array. 

 For Example if 'A' is to be stored at '0' position then, 
*/



#include <stdio.h>
main()
{
int a[10],k,temp,i,j,ele,pos,num;




ele=sizeof(a)/sizeof(a[0]);


printf("enter ele...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("data\n");
for(i=0;i<ele;i++)
printf("%d\n",a[i]);


printf("enter the pos\n");
scanf("%d",&pos);

printf("enter the num\n");
scanf("%d",&num);


for(i=0;i<ele;i++)
{
	if(i==pos)
	{
		for(j=ele;j>i;j--)
		{
		a[j]=a[j-1];
		}

	a[i]=num;	
	break;
	}
}


printf("----------\n");
for(i=0;i<ele;i++)
printf("%d\n",a[i]);




}
