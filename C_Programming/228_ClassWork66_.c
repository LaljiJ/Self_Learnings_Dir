#include<stdio.h>
struct std
{
int roll;
char name[10];
float mark;
	struct nest
	{
	int date;
	int month;
	int year;
	}dob,doj;
};
main()
{
struct std s1={9,"Lalji",23.5,9,4,1998,26,5,2000};

/*
printf("enter roll\n");
scanf("%d",)
*/

printf("%d\t%s\t%f\t%d:%d:%d\t%d:%d:%d\n",s1.roll,s1.name,s1.mark,s1.dob.date,s1.dob.month,s1.dob.year,s1.doj.date,s1.doj.month,s1.doj.year);

}
