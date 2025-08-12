/*
Bubble short 
*/

#include<stdio.h>

int main(void){

int arr[5],ele,i,j,k,t;

ele = sizeof(arr) / sizeof(arr[0]);

printf("enter element\n");
    for(i=0; i <ele;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i <ele;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(j=0;j<ele;j++)
    {
        for(k=0;k<ele-1-j;k++)
        {
            if(arr[k] > arr[k+1])
            {
                t = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = t;
            }
        }
    }

        for(i=0; i <ele;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}