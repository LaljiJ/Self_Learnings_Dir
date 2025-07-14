#include<stdio.h>
#include<string.h>
main(int argc,char** argv)
{

if(argc!=2)
{
printf("usage: ./a.out filename\n");
return;
}

FILE *fp=fopen(argv[1],"r+");

if(fp==0)
{
printf("file not pre...\n");
return;
}
//////////////////////////////////
int c=0;
char s[50];

while(fscanf(fp,"%s",s)!=-1)
{
c=strlen(s);
printf("%d\n",c);
fseek(fp,-c,SEEK_CUR)



}
}
