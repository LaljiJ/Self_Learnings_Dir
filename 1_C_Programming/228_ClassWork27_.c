#include<stdio.h>
main()
{

	int a[5],i,ele,l,j,index;

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter element...\n");

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	l=a[0];
	index=0;
	for(j=1;j<ele;j++)
	{
		if(a[j]>l)
		{
			l=a[j];
			index=j;
		}

	}
	printf("largest number is= %d\n",l);
	printf("index is= %d\n",j);

}
