#include<stdio.h>
main()
{
char s[3][10]={"abcd","efgh","ijkl"};
char *p[]={"ABCD","EFGH","IJKLI"};
int i,ele;

ele=sizeof(s)/sizeof(s[0]);

for(i=0;i<ele;i++)
printf("%s\n",s[i]);

for(i=0;i<ele;i++)
printf("%s\n",p[i]);

}
