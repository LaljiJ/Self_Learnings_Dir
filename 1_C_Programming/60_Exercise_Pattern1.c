/*
WAP to print pattern by given number
Exa: 5

*****
****
***
**
*

*/

#include<stdio.h>

int main(void){
    int num,i,j;

    printf("Enter number\n");
    scanf("%d",&num);

    for(i=0;i<num;i++){

        for(j=0;j<num-i;j++){
            printf("*");
        }
    printf("\n");
    }

}