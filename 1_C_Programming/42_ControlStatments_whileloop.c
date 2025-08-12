/*
Undesratnd while loop
*/

#include<stdio.h>

int main(void){
    int number,option;
    printf("enter number and how many time you want to print\n");
    scanf("%d",&number);

    while(number){
        printf("Hii : %d\n",number);

        number--;
    }

}