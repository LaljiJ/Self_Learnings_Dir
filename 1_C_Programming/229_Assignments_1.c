#include<stdio.h>
main()
{
int a[5],ele,i,j,c,k;

ele=sizeof(a)/sizeof(a[0]);

printf("enter the element...\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
{
	for(j=i+1,c=1;j<ele;j++)
	{
		if(a[i]==a[j])
		{
		c++;
		for(k=j;k<ele;k++)
		a[k]=a[k+1];
		
		ele--;
		j--;
		}
	}
if(c!=1)
printf("%d %d",a[i],c);
printf("\n");

}


}
