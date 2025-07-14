#include<stdio.h>
main(int argc,char ** argv)
{
FILE *fp,*fd;
char ch;

if(argc!=3)
{
printf("Usage : ./a.out sourcefname destfname\n");
return;
}

fp=fopen(argv[1],"r");

if(fp==0)  
{
printf("file not present....\n");
return;
}
printf("file present....\n");



//fp=fopen(argv[1],"r");

fd=fopen(argv[2],"w");

while((ch=fgetc(fp))!=-1)
fputc(ch,fd);



}
