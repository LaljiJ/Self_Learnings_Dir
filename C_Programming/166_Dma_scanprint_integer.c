/*
Allocate dynamic memory to one ineteger,char,float and scan it and print it
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    //make sure pointer make always NULL other wise garbage data store
    char *ch=0;
    int *i=0;
    float *f=0;

    ch = (char*)malloc(sizeof(char)*10);
    i = (int*)malloc(sizeof(int)*5);
    f = (float*)malloc(sizeof(float)*5);

    printf("enter ch\n");
    scanf(" %c",ch);
    printf("enter i\n");
    scanf("%d",i);
    printf("enter f\n");
    scanf("%f",f);

    printf("%c %d %f\n",*ch,*i,*f);

    free(ch);
    free(i);
    free(f);

    printf("%c %d %f\n",*ch,*i,*f);
}