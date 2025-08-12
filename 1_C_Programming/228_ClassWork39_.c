#include<stdio.h>
main(int argc,char ** argv)
{
FILE *fp;
char s[10],ch;
int c=0;

if(argc!=2)
{
printf("Usage : ...\n");
return;
}

fp=fopen(argv[1],"r");

if(fp==0)
{
printf("file not ...\n");
return;
}
printf("file present...\n");

while((ch=fgetc(fp))!=-1)
{
//printf("%c",ch);
c++;
}
printf("c=%d\n",c);
//fp=fgetc(s);
//printf("%c",*fp);


}

