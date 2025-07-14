#include<stdio.h>
main()
{

int num,pos=31;


printf("enter num...\n");
scanf("%d",&num);

L1:
printf("%d",num>>pos&1);
pos--;
	if(pos>=0)

goto L1;
printf("\n");








}
