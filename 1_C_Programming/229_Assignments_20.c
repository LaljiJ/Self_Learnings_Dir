#include<stdio.h>
main()
{

int i,j,k,a,n;

printf("enternum...\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{

for(j=1,k=1,a=0;j<=i;j++)
{

if(i%2==0)
{

printf("%d ",j+k);
k++;
}
else
{
printf("%d ",j+a);
a++;
}


}

printf("\n");



}



}

