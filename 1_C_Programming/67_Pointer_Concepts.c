/*
Undesratnd Pointer concepts
*/

#include<stdio.h>

int main(void){
    char ch1,ch2,ch3;
    char *ch;

    ch = &ch1;
    printf("ch : %p | ch : %u\n",ch,ch);
    ch = &ch2;
    printf("ch : %p | ch : %u\n",ch,ch);
    ch = &ch3;
    printf("ch : %p | ch : %u\n",ch,ch);

int i,j,k;
int *p;

    p = &i;
    printf("p : %p | p : %u\n",p,p);
    p = &j;
    printf("p : %p | p : %u\n",p,p);
    p = &k;
    printf("p : %p | p : %u\n",p,p);

float f1,f2,f3;
float *f;


    f = &f1;
    printf("f : %p | f : %u\n",f,f);
    f = &f2;
    printf("f : %p | f : %u\n",f,f);
    f = &f3;
    printf("f : %p | f : %u\n",f,f);

double d1,d2,d3;
double *d;

    d = &d1;
    printf("d : %p | d : %u\n",d,d);
    d = &d2;
    printf("d : %p | d : %u\n",d,d);
    d = &d3;
    printf("d : %p | d : %u\n",d,d);

}