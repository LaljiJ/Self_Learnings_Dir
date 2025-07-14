#include<stdio.h>
int binary(int);
main()
{
int num;

printf("enter num...\n");
scanf("%d",&num);
binary(num);
printf("\n");
}

/////////////////////////////////////////////////// 

int binary(int num)
{
int pos;

for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}
