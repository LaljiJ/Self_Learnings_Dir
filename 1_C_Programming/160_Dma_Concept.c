/*
Understand dynamic memory allocation concepts
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    char *ch;
    int *i;
    float *f;

    ch = (char*)malloc(sizeof(char));
    i = (int*)malloc(sizeof(int));
    f = (float*)malloc(sizeof(float));
}