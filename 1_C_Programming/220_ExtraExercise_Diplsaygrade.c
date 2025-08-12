/*
WAP to display 
80 - 100 : grade A
60 - 79 : grade B
40 - 59 : grade C
below 39 : fail
*/

#include<stdio.h>

int main(void){

int mark;

    printf("enter mark\n");
    scanf("%d",&mark);

    if(mark >= 80){
        printf("Grade A\n");
    }
    else if(mark >= 60 && mark<=79){
        printf("Grade B\n");
    }
    else if(mark >= 40 && mark <= 59){
        printf("Grade C\n");
    }
    else{
        printf("Fail\n");
    }
}