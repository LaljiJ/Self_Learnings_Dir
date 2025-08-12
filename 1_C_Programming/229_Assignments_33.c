 #include<stdio.h>
 int divider(int);
 main()
 {
 int num,l;
 
 printf("Entre nummm...\n");
 scanf("%d",&num);
 
 l=divider(num);
printf("\nDivider Sum=%d\n",l);
 }
int divider(int num)
{
static int i=1,sum=0;

	//if(num)
	//{
	//i=i+1;
		if(i<num)
		{
		if(num%i==0)
		{
		printf("%d ",i);
		sum=sum+i;
		//i=i+1;
		//divider(num);
		}
		i=i+1;
		divider(num);
		}
	else 
	return sum;

	//}
}


