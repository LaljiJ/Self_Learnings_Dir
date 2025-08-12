/*
Understand user define datatype 
*/

#include<stdio.h>
#pragma pack(1)
/*
prototype

keword tag{
    datavariable1;
    datavariable2;
    datavariable3;
};
*/
struct std{
char ch;
int i;
float f;
};

int main(void){

    printf("size : %d\n",sizeof(struct std)); // size of struct is 12 because of structure padding
                                                // to avaoid used #pragama 
}