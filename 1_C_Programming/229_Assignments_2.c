#include<stdio.h>
main()
{
int a[10];                         //{0,3,1,0,5,1,2,0,4,5};
int i,j,c,ele;

ele=sizeof(a)/sizeof(a[0]);

printf("enter the element..\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

//////////////////////////////////////////////////

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
/////////////////////////////////////////////////

for(i=0;i<ele;i++)
{
	for(j=0,c=0;j<ele;j++)
	{
	if(a[i]==a[j])
	c++;
	}
	
if(c==1)
printf("%d ",a[i]);


}
printf("\n");



}



























/*
for(i=0;i<ele;i++)
{
	for(j=0,c=0;j<ele;j++)
	{
		if(i>j&&a[i]==a[j])
		break;              
		else if(a[i]==a[j])
               c++;
		
	}
   	if(c==1)
	printf("%d ",a[i]);
}
f(c!=1)
printf("%d %d",a[i],c);
printf("\n");

}
*/

