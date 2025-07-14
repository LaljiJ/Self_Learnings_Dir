/*
WAP to revers the bit of given number not revers print
*/

#include<stdio.h>

int main(void){
    int num,pos,temp1,temp2,i,j;

    printf("enter number\n");
    scanf("%d",&num);

    for(pos=31;pos>=0;pos--){
        printf("%d ",(num>>pos)&1);
    }
    printf("\n");

    for(i=0,j=31 ; i < j;i++,j--){
        temp1 = num >> i & 1;
        temp2 = num >> j & 1;

        if(temp1 != temp2){
            num = num ^ 1 << i;
            num = num ^ 1 << j;
        }
    }

    for(pos=31;pos>=0;pos--){
        printf("%d ",(num>>pos)&1);
    }
    printf("\n");
}
