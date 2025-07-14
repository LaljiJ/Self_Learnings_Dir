#include<stdio.h>
main()
{
	char s[20];
	int i;

	printf("enter the tring...\n");
	//scanf("%s",s);
	gets(s);

	for(i=0;s[i];i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')

			printf("%c",s[i]);

	}

	printf("\n");
}
