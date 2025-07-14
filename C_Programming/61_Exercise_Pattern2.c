/*
WAP to print pattern by given number
Exa: 5

* * * * *
 * * * *
  * * *
   * *
    *
*/

#include<stdio.h>

int main(void){
    int i,j,k;
    int num;

    printf("Enter number\n");
    scanf("%d",&num);

    for(i=0;i<num;i++){

        for(j=0;j<i;j++){
            printf(" ");
        }

        for(k=0;k < num - i ; k++){
            printf("* ");
        }
    printf("\n");
    }

}