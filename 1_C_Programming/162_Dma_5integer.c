/*
Allocate dynamic memory to 5 integer and scan it and print it
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    //make sure pointer make always NULL other wise garbage data store
    int *p=0;

    p = (int*)malloc(sizeof(int)*5);
    
    for(int i=0;i<5;i++){
        scanf("%d",&p[i]);
    }

    for(int i=0;i<5;i++){
        printf("data : %d\n",p[i]);
    }
    
        free(p);
}