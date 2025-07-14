
// using recurtion not complete //


#include<stdio.h>
int word(int);
main()
{
int num,l;


printf("enter number..\n");
scanf("%d",&num);


l=word(num);
//printf("%d\n",l);

	while(l)
	{
	switch(l%10)
	{
	//case 0:printf("zero ");
	//	break;
	case 1:printf("one ");
		break;
	case 2:printf("two ");
		break;
	case 3:printf("three ");
		break;
	case 4:printf("four ");
		break;
	case 5:printf("five ");
		break;
	case 6:printf("six ");
		break;
	case 7:printf("seven ");
		break;
	case 8:printf("eight ");
		break;
	case 9:printf("nine ");
		break;
	}
	l=l/10;
	}
	printf("\n");
}
int word(int num)
{
static int sum=0;
int i;
	if(num)
	{
	sum=sum*10+num%10;	
	//num=num/10;
	//printf("%d ",sum);
	num=num/10;
	word(num);
	//printf("%d ",sum);
	}
return sum;
/*
	i=num%10;
//	printf("%d \t",i);
		if(i==1)
		printf("one ");
		if(i==2)
		printf("two ");
		if(i==3)
		printf("three ");
		if(i==4)
		printf("four ");
	
	num=num/10;
	word(num);
	}

//	printf("%d\n",c);


*/
}
