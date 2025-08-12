#include<stdio.h>
main()
{
char s[]="lalji joshi";
int i,j,k,t;


for(i=0;s[i];i++)
{
	for(j=i;s[j]!=' '&&s[j]!='\0';j++);
	
	k=j;
	j--;
	for(i,j;i<j;i++,j--)
	{	
	t=s[i];
	s[i]=s[j];
	s[j]=t;
	}
//	i=k;
	if(k=='\0')	
	k--;
	i=k;
}

printf("%s",s);









/*
for(i=0;s[i];i++);

for(i=i-1;s[i];i--)
{
	for(j=0;s[i];j++)
	{
	t=s[j];
	s[j]=s[i];
	s[i]=t;
	i--;
	}

}
printf("%s",s);
*/
}
