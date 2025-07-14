#include<stdio.h>
#include<string.h>
main()
{
char s[5][20],var[50];
int i,j,ele;

ele=sizeof(s)/sizeof(s[0]);

printf("*****Enter the string*****\n");
for(i=0;i<ele;i++)
scanf("%s",s[i]);

for(i=0;i<ele;i++)
{
	for(j=i+1;j<ele;j++)
	{
		if(strlen(s[i])>strlen(s[j]))
		{
		strcpy(var,s[i]);
		strcpy(s[i],s[j]);
		strcpy(s[j],var);
		}
	}
}

printf("*****After Lenth wise*****\n");
for(i=0;i<ele;i++)
printf("%s\n",s[i]);

}
