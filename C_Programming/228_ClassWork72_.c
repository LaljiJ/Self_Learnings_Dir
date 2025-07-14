#include<stdio.h>
main()
{

int n,k,l;

printf("enter number...\n");
scanf("%d",&n);

for(n,k=0;n;n=n/10)
{
l=n%10;
k=k+l;
}
printf("total=%d\n",k);






}
