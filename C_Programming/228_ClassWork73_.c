#include<stdio.h>
main()
{

char a[15],b[15];
int i,j;

printf("enter 1st  and 2nd string...\n");
scanf("%s%s",a,b);

for(i=0;a[i];i++);

for(i=i,j=0;b[j];i++,j++)
{
a[i]=b[j];
}
a[i]='\0';

printf("%s\n",a);






}
