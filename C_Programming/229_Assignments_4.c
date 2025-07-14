/*
5) Write a C program to reverse  the elements of a given array.
*/

#include <stdio.h>
main()
{
int a[5],ele,i,j,temp;

ele=sizeof(a)/sizeof(a[0]);

printf("Enter The Ele....\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);


printf("Given Ele....\n");
for(i=0;i<ele;i++)
printf("%d\n",a[i]);

for(i=0,j=ele-1;i<j;i++,j--)
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}


printf("Output Ele....\n");
for(i=0;i<ele;i++)
printf("%d\n",a[i]);


}
