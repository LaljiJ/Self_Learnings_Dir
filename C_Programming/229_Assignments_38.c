#include<stdio.h>
main()
{
char s[20];
int i,j,t;
printf("enter string...\n");
//scanf("%s",s);
gets(s);

for(j=0;s[j];j++);

for(i=0,j=j-1;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
printf("%s",s);
printf("\n");

}
