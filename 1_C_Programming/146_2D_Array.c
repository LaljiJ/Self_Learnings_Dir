/*
Understand 2D array print 2D array element
*/

#include<stdio.h>

int main(void){

    // declare 2D array
    // prototype : datatype variblename[row][colum];
    int arr[2][3]={0},row,col,i,j;
    row = sizeof(arr)/sizeof(arr[0]);
    col = sizeof(arr[0])/sizeof(arr[0][0]);

    for(i=0;i<row;i++){

        for(j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
printf("\n");
}
