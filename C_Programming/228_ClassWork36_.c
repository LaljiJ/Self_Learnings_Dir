#include<stdio.h>
main(int argc,char ** argv)
{
FILE *fp;
char s[20];

//printf("enter mod\n");
//scanf(" %c",&ch);

if(argc!=2)
{
printf("Uage : ./a.out filnem\n");
return;
}

fp=fopen(argv[1],"r");
//fp=fclose(argv[1],"r");

if(fp==0)
{
printf("file not present...\n");
return;
}
printf("file present...\n");

}
