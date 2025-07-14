/*
 Write a Program to remove a Specific line from the given text file.
*/

#include<stdio.h>
#include<stdlib.h>
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

int r=0,c=0,l=0;
char ch;

while((ch=fgetc(fp))!=-1)
{
l++;
	if(ch=='\n')
	{
	r++;
		if(l>c)
		c=l;

	l=0;
	}
}
rewind(fp);

printf("r=%d c=%d\n",r,c);

////////////////////////////////////////////////////

char **p;
int i;

p=malloc(c+1);
for(i=0;i<r;i++)
p[i]=malloc(sizeof(char*)*r);

//////////////////////////////////////
char s[50];

i=0;
while(fgets(s,c+1,fp));

/////////////////////////////////////
fp=fopen(argv[1],"w");

for(i=0;i<r;i++)
{
	if(atoi(argv[2])!=i)
	fputs(p[i],fp);

}



}
