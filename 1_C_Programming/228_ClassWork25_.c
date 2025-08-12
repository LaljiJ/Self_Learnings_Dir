#include<stdio.h>
main()
{

int a[5]={10,20,30,40,50};
int e,i;

printf("%d ",sizeof (a));
printf("%d  ",sizeof a[0]);

e=sizeof (a)/sizeof a[0];
printf("%d \n",e);


for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}



}
