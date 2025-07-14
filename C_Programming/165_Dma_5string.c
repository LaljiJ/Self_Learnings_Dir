/*
Allocate dynamic memory to 5 string and scan it and print it
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    //make sure pointer make always NULL other wise garbage data store
    char *pstr[5] = {0};
    int i=0;

    for( i=0;i<5;i++){
    pstr[i] = (char*)malloc(sizeof(char)*20);
    }

    for( i=0;i<5;i++){
    scanf(" %[^\n]",pstr[i]);
    }
    
    for( i=0;i<5;i++){
    printf("pstr : %s\n",pstr[i]);
    }

    for( i = 0 ;i <5;i++){
    free(pstr[i]);
    }
}