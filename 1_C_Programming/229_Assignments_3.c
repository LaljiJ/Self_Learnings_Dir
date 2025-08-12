#include<stdio.h>
main()
{
int a[]={10,2,4,5,2,1,3,4,6,5,8,9,2};
int i,j,k,ele,t,count;

///////////////////////////////////////////////////////

for(i=0;i<13;i++)
{
	for(j=i+1;j<13;j++)	
	{
	if(a[i]>a[j])
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	
	}	



}

for(i=0;i<13;i++)
printf("%d ",a[i]);

/////////////////////////////////////////////////////

for(i=0;i<13;i++)
{
	for(j=i+1,count=1;j<13;j++)
	{
	if(a[i]==a[j])
	count++;	
	}
if(count==1)
{
for(k=0;k<13;k++)


}
}

/*
for(i=0;i<13;i++)
{
	for(j=i+1;j<13;j++)
	{
	if(a[i]==a[j])
	{
		for(k=j;k<13;k++)
		a[k]=a[k+1];
		for(l=0;)
	}
	
	}



}

*/













































































/*
int a[10],b[10],c[10];
int i,j,k,count,ele,l;

ele=sizeof(a)/sizeof(a[0]);

printf("enter ele...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
{
	for(j=0,count=0;j<ele;j++)
	{
	if(a[i]==a[j])
	count++;
	
	
	}
	if(count==1)
	{	
	for(k=0;k<ele;k++)
	b[k]=a[i];
	printf("%d ",b[k]);
	}
	if(count>=2)
	{
	for(l=0;l<ele;l++)
	c[l]=a[i];
	printf("%d ",b[l]);
	}



}



}
*/
