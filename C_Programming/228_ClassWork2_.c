#include<stdio.h>
main()
{

float f=23.5;
char *q;
int i,pos;

q=&f;
q=q+3;
for(i=0;i<4;i++)
{

	for(pos=7;pos>=0;pos--)
	{
	printf("%d",*q>>pos&1);
	}
	q=q-1;


}
printf("\n");

}
