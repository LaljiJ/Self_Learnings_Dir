/*
Compile time preprocessor error
*/

#include <stdioh>

int main()
{
    printf("Hello world\n");

    return 0;
}

/*
#include <stdio.h>

// Macro Definition
#define LIMIT 5

// Undefine macro
#undef LIMIT

int main(){
    for (int i = 0; i < LIMIT; i++) {
        printf("%d \n", i);
    }
    return 0;
}
*/