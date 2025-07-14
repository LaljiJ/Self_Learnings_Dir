/*
WAP to swap nibble of given character not print
*/

#include<stdio.h>

int main(void){
    char ch,ch2;
    int pos,i,j;

    printf("enter char\n");
    scanf("%c",&ch);

        for(pos=7;pos>=0;pos--){
        printf("%d ",(ch>>pos)&1);
    }
    printf("\n");

    for(i = 0,j = 4;i<4;i++,j++){
        ch >> 4;
        ch << 4;

        ch2 = ch >> 4 | ch << 4;
    }

            for(pos=7;pos>=0;pos--){
        printf("%d ",(ch2>>pos)&1);
    }
    printf("\n");
}