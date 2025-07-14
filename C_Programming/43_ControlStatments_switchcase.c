/*
understand switch case
*/

#include<stdio.h>

int main(void){
    int num;

    printf("enter number\n");
    scanf("%d",&num);

    switch(num){
                case 1:printf("number is 1\n");
        break;
                case 7:printf("number is 1\n");
        break;

                case 2:printf("number is 2\n");
        break;

                case 3:printf("number is 3\n");
        break;

                case 4:printf("number is 4\n");
        break;

                case 5:printf("number is 5\n");
        break;

                case 6:printf("number is 6\n");
        break;
        
        default:
        printf("other number\n");
    }


}