/*
Bus error
*/

#include <stdio.h>

int main() {
    char data[5];
    int *ptr;

    ptr = (int *)(data + 1); // ptr now points to an unaligned address
    *ptr = 10; // This will likely cause a bus error

    return 0;
}