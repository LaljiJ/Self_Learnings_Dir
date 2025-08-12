#include<stdio.h>
void print(int,int,int (*)[]);
main()
{
int a[2][3]={{10,20,30},{40,50,60}};

print(r,c,a);

}
void print(int r,int c,int (*a)[c])
{
int i,j;

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	printf("%d ",a[i][j]);

	printf("\n");
}

}

