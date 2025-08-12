/*
Allocate dynamic memory to 1 string and scan it and print it
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    //make sure pointer make always NULL other wise garbage data store
    char *pstr = NULL;

    pstr = (char*)malloc(sizeof(char)*20);

    scanf("%[^\n]",pstr);
    
    printf("pstr : %s\n",pstr);

    free(pstr);
}