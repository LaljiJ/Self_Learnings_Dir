/*
WAP to implement basic calculator using commandline argument
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** argv){

int num1,num2,num3;

    if(argc != 4){
        printf("usage : executablefile digit1 sign digit2\n");
        return 0;
    }

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

    switch(argv[2][0]){
        case '-' : printf("%d - %d = %d\n",num1,num2,num3 = num1-num2);
                    break;

        case '+' : printf("%d + %d = %d\n",num1,num2,num3 = num1+num2);
                    break;
        
        case '*' : printf("%d * %d = %d\n",num1,num2,num3 = num1*num2);
                    break;
        
        case '/' : printf("%d / %d = %d\n",num1,num2,num3 = num1/num2);
                    break;

        default : printf("unknown option\n");
    }


}