#include<stdio.h>
main()

{

int num,pos;

printf("enter the number..\n");
scanf("%d",&num);

printf("enter the position..\n");
scanf("%d",&pos);

printf("befor number..%d\n",num);

num=num|1<<pos;

printf("after ans..%d\n",num);



}
