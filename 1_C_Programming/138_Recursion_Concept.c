/*
Understand recursion concepts , how to constrol recursive function
*/

#include<stdio.h>

// int main(){
//     int i=0;

//     printf("Hello\n");

//     if(i < 3){
//         i++;
//     main();
//     //i++;
//     }
//     printf("Hii\n");
// }

int main(){
    static int i=0; // its controlable because static keywords reinitialization cant happen

    printf("Hello\n");

    if(i < 3){
        i++;
    main();
    //i++;
    }
    printf("Hii\n");
}