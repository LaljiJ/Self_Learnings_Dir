/*
understand file concepts
*/

#include<stdio.h>
int main(void){

FILE *fp;

//write mode file not present the create
fp = fopen("data.txt","w"); //mode is r,r+,w,w+,a,a+
if(fp == 0){
    printf("file not present\n");
    return 0;
}

    printf("file present\n");

}