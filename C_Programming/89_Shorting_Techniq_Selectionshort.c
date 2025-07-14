/*
Selection short
*/

#include<stdio.h>

int main(void){
int arr[5],i,j,t,ele;

ele = sizeof(arr) / sizeof(arr[0]);

printf("enter element\n");
    for(i=0; i <ele;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i <ele;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i = 0;i<ele;i++){

            for(j=i+1;j<ele;j++){

                if(arr[i] > arr[j]){
                    t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }

    }
    for(i=0; i <ele;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}