/*
WAP to scan number and option from user display setbit,clearbit,compliment bit 
upon option display result
*/

#include<stdio.h>

int main(void){

int num,pos,option;

printf("enter number and pos\n");
scanf("%d%d",&num,&pos);

printf("enter option\n1.set bit\n2.clearbit\n3.compliment bit\n");
scanf("%d",&option);

    if (option == 1)
    {
        num = (num|(1<<pos));
        printf("number : %d\n",num);
    }
    else if(option == 2){
        num = (num&~(1<<pos));
        printf("number : %d\n",num);
    }
    else if(option == 3){
        num = (num^(1<<pos));
        printf("number : %d\n",num);
    }
    else{
        printf("wrong option\n");
    }

}