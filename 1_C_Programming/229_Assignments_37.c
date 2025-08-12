#include<stdio.h>
main()
{
	char f[10],s[10];
	int i;
	printf("enter first string...\n");
	scanf("%s",f);

	printf("enter second string...\n");
	scanf("%s",s);

	for(i=0;f[i];i++)
	{
		if(f[i]!=s[i])
			break;
	}
	if(f[i]==s[i])
		printf("equal.....\n");
	else
		printf("not equal.....\n");


}
