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

int main(void){

int rollnum[5];
char name[5][20];
float mark[5];

int temp,temp1,option,varibletempint;
char variabletempstring[20];
float variabletempfloat;

    for(temp = 0 ; temp < 5 ; temp++){
        printf("Enter %dst student data 1.rollnumber, 2.name, 3.mark\n",temp+1);
        scanf("%d",&rollnum[temp]);
        scanf(" %[^\n]",name[temp]);
        scanf("%f",&mark[temp]);
    }

    printf("All data is :\n");
    for(temp = 0;temp<5;temp++){
        printf("%d\t%s\t%f\n",rollnum[temp],name[temp],mark[temp]);
    }

printf("Enter the option you on which type you want to short data\n1. Rollnumber wise\n2. Name wise\n3. Marks wise\n");
scanf("%d",&option);

    switch(option)
    {
        case 1: printf("Data is short Rollnumber wise\n");
                for(temp = 0;temp<5;temp++){

                    for(temp1 = temp+1;temp1<5;temp1++){

                    if(rollnum[temp] > rollnum[temp1]){

                        varibletempint = rollnum[temp];
                        rollnum[temp] = rollnum[temp1];
                        rollnum[temp1] = varibletempint;

                        strcpy(variabletempstring,name[temp]);
                        strcpy(name[temp],name[temp1]);
                        strcpy(name[temp1],variabletempstring);

                        variabletempfloat = mark[temp];
                        mark[temp] = mark[temp1];
                        mark[temp1] = variabletempfloat;                       
                    }
                    }
                }

                for(temp = 0;temp<5;temp++){
                     printf("%d\t%s\t%f\n",rollnum[temp],name[temp],mark[temp]);
                }
                break;

        case 2: printf("Data is short Name wise\n");
                for(temp = 0;temp<5;temp++){

                for(temp1 = temp+1;temp1<5;temp1++){

                if(name[temp][0] > name[temp1][0]){

                        varibletempint = rollnum[temp];
                        rollnum[temp] = rollnum[temp1];
                        rollnum[temp1] = varibletempint;

                        strcpy(variabletempstring,name[temp]);
                        strcpy(name[temp],name[temp1]);
                        strcpy(name[temp1],variabletempstring);

                        variabletempfloat = mark[temp];
                        mark[temp] = mark[temp1];
                        mark[temp1] = variabletempfloat;                       
                    }
                }
                }

                for(temp = 0;temp<5;temp++){
                     printf("%d\t%s\t%f\n",rollnum[temp],name[temp],mark[temp]);
                }
                break;

        case 3: printf("Data is short Mark wise\n");
                for(temp = 0;temp<5;temp++){

                for(temp1 = temp+1;temp1<5;temp1++){

                if(mark[temp] > mark[temp1]){

                        varibletempint = rollnum[temp];
                        rollnum[temp] = rollnum[temp1];
                        rollnum[temp1] = varibletempint;

                        strcpy(variabletempstring,name[temp]);
                        strcpy(name[temp],name[temp1]);
                        strcpy(name[temp1],variabletempstring);

                        variabletempfloat = mark[temp];
                        mark[temp] = mark[temp1];
                        mark[temp1] = variabletempfloat;                       
                    }
                }
                }

                for(temp = 0;temp<5;temp++){
                     printf("%d\t%s\t%f\n",rollnum[temp],name[temp],mark[temp]);
                }
                break;

    default : printf("Please select valid option\n");
                break;
    }

}