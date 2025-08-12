/*
WAP to count number of bit set and clear
*/

#include<stdio.h>

int main(void){

    int num,pos,countset=0,countclear=0;

    printf("enter number\n");
    scanf("%d",&num);

    for(pos=31;pos>=0;pos--){
        printf("%d ",(num>>pos)&1);
        if( ((num>>pos)&1) == 1){
            countset++;
        }
        else{
            countclear++;
        }
    }
    printf("\n");
    printf("countset : %d   countclear : %d\n",countset,countclear);
}