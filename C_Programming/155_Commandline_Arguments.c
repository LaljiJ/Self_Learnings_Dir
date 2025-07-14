/*
Understand commandline concepts
*/

#include<stdio.h>

int main(int argc,char** argv){

int i;

    if(argc < 2){
        printf("usage: executable value\n");
        return 0;
    }

    printf("argc : %d\n",argc);
    printf("value is : %s\n",argv[1]);     // %s because whatever we are pass in command line trited as a string

}