/*
understand file concepts
*/

#include<stdio.h>
int main(void){

FILE *fp;

// read mode file not created
fp = fopen("data.txt","r");
if(fp == 0){
    printf("file not present\n");
    return 0;
}

    printf("file present\n");

}