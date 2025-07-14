#include <stdio.h>

int main()
{
    short int i1 = 0;
    int i2 = 0;
    long int i3 = 0;
    long long int i4 = 0;

    printf("i1: %d\ni2: %d\ni3: %d\ni4: %d\n", sizeof(i1), sizeof(i2), sizeof(i3), sizeof(i4));
}