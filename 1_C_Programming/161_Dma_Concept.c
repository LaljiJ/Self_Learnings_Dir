/*
Understand dynamic memory allocation concepts
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    char *ch;
    int *i;
    float *f;

    ch = (char*)malloc(sizeof(char)*10);
    i = (int*)malloc(sizeof(int)*5);
    f = (float*)malloc(sizeof(float)*5);

}