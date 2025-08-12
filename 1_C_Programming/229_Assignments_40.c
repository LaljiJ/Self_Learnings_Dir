#include<stdio.h>
main()
{
char s[]="vector                  india                       pvt                    ltd";
int i,j,k;

for(i=0;s[i];i++)
{
	for(j=i;s[j];j++)
	{
	if(s[j]==' '&&s[j+1]==' ')
		{
			for(k=j+1;s[k];k++)
			{
			s[k]=s[k+1];
			}
		
		}

	}


}
printf("%s\n",s);

}
