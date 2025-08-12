#include<stdio.h>
main()
{
char a[50],ch;
int i,j,c;

printf("enter ther string.....\n");
scanf("%s",a);

printf("enter ther character.....\n");
scanf(" %c",&ch);
for(i=0,c=0;a[i];i++)
{
	if(a[i]==ch)
	{	
	c++;
		for(j=i;a[j];j++)
		{
		a[j]=a[j+1];
		}
	i--;
	}
}
printf("%s\n",a);
printf("c=%d\n",c);

}
