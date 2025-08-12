/*
 Write a Program to remove a Specific line from the given text file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char ** argv)
{

if(argc!=3)
{
printf("Usage: ./a.out filename lineno.\n");
return;
}

FILE *fp=fopen(argv[1],"r");

if(fp==0)
{
printf("file not present....\n");
return;
}

///////////////////////////////////////////
char s[50],s1[50];

while(fgets(s,"%s",fp))
{
	if(s!=atoi(argv[2]))

}
////////////////////////////////////////////////////



}
