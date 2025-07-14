/*
6) Write a C program to delete an element at desired position from an array.
*/


#include <stdio.h>
main()
{
int a[5],i,j,temp,ele,pos;


ele=sizeof(a)/sizeof(a[0]);

printf("enter the ele...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("enter the pos...\n");
scanf("%d",&pos);

for(i=0;i<ele;i++)
{
	if(i==pos)
	{
	   for(j=i;j<ele;j++)
	   {
		a[j]=a[j+1];
		//a[i]=a[i+1];
	   }
	ele--;		
	}

}


printf("output ele...\n");
for(i=0;i<ele;i++)
printf("%d\n",a[i]);


}
