/*
WAP to handle five student record.
1) we need to handle student rollno,student name,student total sub mark.
2) Scan all student information and print on screen. scan student roll number,student mark.
3) After print the data and display menu for short the data.
    I. Short with respect to rollnumber
    II. Short with respect to name
    III. Short with respect to mark
    scan option from user and depend on option short data and print on screen

*/

#include<stdio.h>
#include<string.h>

struct std{
    int rollnum;
    char name[20];
    float mark;
};

int main(void){

struct std data[5],structtempvar;
int temp,temp1,option;

    for(temp = 0 ; temp < 5 ; temp++){
        printf("Enter %dst student data 1.rollnumber, 2.name, 3.mark\n",temp+1);
        scanf("%d",&data[temp].rollnum);
        scanf(" %[^\n]",data[temp].name);
        scanf("%f",&data[temp].mark);
    }
    
    for(temp =0;temp <5;temp++){
        printf("%d\t%s\t%f\n",data[temp].rollnum,data[temp].name,data[temp].mark);
    }

printf("Enter the option you on which type you want to short data\n1. Rollnumber wise\n2. Name wise\n3. Marks wise\n");
scanf("%d",&option);

    switch(option){

        case 1: printf("Data is short Rollnumber wise\n");
                for(temp = 0 ; temp < 5; temp++){

                    for(temp1 =temp+1;temp1 < 5;temp1++){
                        if(data[temp].rollnum > data[temp1].rollnum){
                            structtempvar = data[temp];
                            data[temp] = data[temp1];
                            data[temp1] = structtempvar;
                        }
                    }
                }

                for(temp =0;temp <5;temp++){
                printf("%d\t%s\t%f\n",data[temp].rollnum,data[temp].name,data[temp].mark);
                }
                break;

        case 2: printf("Data is short Name wise\n");
                for(temp = 0 ; temp < 5; temp++){

                    for(temp1 =temp+1;temp1 < 5;temp1++){
                        if(data[temp].name[0] > data[temp1].name[0]){
                            structtempvar = data[temp];
                            data[temp] = data[temp1];
                            data[temp1] = structtempvar;
                        }
                    }
                }

                for(temp =0;temp <5;temp++){
                printf("%d\t%s\t%f\n",data[temp].rollnum,data[temp].name,data[temp].mark);
                }
                break;

        case 3: printf("Data is short Mark wise\n");
                for(temp = 0 ; temp < 5; temp++){

                    for(temp1 =temp+1;temp1 < 5;temp1++){
                        if(data[temp].mark > data[temp1].mark){
                            structtempvar = data[temp];
                            data[temp] = data[temp1];
                            data[temp1] = structtempvar;
                        }
                    }
                }

                for(temp =0;temp <5;temp++){
                printf("%d\t%s\t%f\n",data[temp].rollnum,data[temp].name,data[temp].mark);
                }
                break;

    default : printf("Please select valid option\n");
                break;    
    }

}