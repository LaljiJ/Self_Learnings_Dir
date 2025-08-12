/*
Segmentation fault
*/

// fault when array out of bound is accessed.
#include <stdio.h>

int main()
{
    int arr[2];

    // Accessing out of bound
    arr[3] = 10;
    return 0;
}


/*
// by modifying a string literal
#include <stdio.h>

int main()
{
    char* str;

    // Stored in read only part of data segment //
    str = "GfG";

    // Problem:  trying to modify read only memory //
    *(str + 1) = 'n';
    return 0;
}
*/


/*
// the segmentation fault 
// due to stack overflow
#include <stdio.h>

int main()
{

    int array[2000000000];
    return 0;
}
*/


/*
// segementation fault due to
// buffer overflow
#include <stdio.h>

int main()
{

    char ref[20] = "This is a long string";
    char buf[10];
    sscanf(ref, "%s", buf);

    return 0;
}
*/