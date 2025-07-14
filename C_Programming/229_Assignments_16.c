#include<stdio.h>
main(int argc,char** argv)
{
FILE *fp;
char ch;
if(argc!=2)
{
printf("Usage: ./a.out filename\n");
return;
}

fp=fopen(argv[1],"r+");

if(fp==0)
{
printf("File not preset...\n");
return;
}
//printf("File present\n");

while((ch=fgetc(fp))!=-1)
{
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
	ch=ch^32;
	fseek(fp,-1,SEEK_CUR);
	fputc(ch,fp);
	}

//fputc(ch,fp);
}
//fputc(ch,fp);


}
