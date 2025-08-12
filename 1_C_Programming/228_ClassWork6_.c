#include<stdio.h>
#include<string.h>
main()
{
	char s[5][20],*var;
	char *p[5];
	int i,j,ele;

	ele=sizeof(s)/sizeof(s[0]);

	for(i=0;i<ele;i++)
		p[i]=s[i];

	printf("***Enter String***\n");
	for(i=0;i<ele;i++)
		scanf("%s",s[i]);

	//for(i=0;i<ele;i++)
	//p[i]=s[i];

	printf("***Befor Print String***\n");
	for(i=0;i<ele;i++)
		printf("%s\n",s[i]);

	printf("***Befor Pointer String***\n");
	for(i=0;i<ele;i++)
		printf("%s\n",p[i]);

	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(strcmp(p[i],p[j])==1)
			{
				var=p[i];
				p[i]=p[j];
				p[j]=var;
			}
		}

	}

	printf("***After Print String***\n");
	for(i=0;i<ele;i++)
		printf("%s\n",s[i]);

	printf("***After Pointer String***\n");
	for(i=0;i<ele;i++)
		printf("%s\n",p[i]);
}
