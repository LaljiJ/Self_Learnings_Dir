/*
Compile time linker error
*/

#include <stdio.h>

int main()
{
    printf("Hello world\n");
    strlen("Hello world");
    return 0;
}