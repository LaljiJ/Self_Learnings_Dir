#include<stdio.h>
main()
{

int i,j,k,l,n;

printf("enter ....\n");
scanf("%d",&n);

for(i=1;i<6;i++)
{

for(j=1;j<6-i;j++)
{
printf(" ");
}

for(k=1,l=1;k<=i+i-1;l++,k++)
{
printf("%d",l);
}

printf("\n");
}


for(i=1;i<n-1;i++)
{

for(j=1;j<=i;j++)
{
printf(" ");
}

for(k=0,l=1;k<=8-i-i;l++,k++)
{
printf("%d",l);

}

printf("\n");


}






}


