/*
8) Write a C program which deletes the duplicate elements of an array.
*/

#include <stdio.h>
main()
{
char a[10]={'A','B','C','D','A','B','E','D','B','C'};
int ele,c=0,c2=0,i;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
printf("%c ",a[i]);
printf("\n");

for(i=0;i<ele;i++)
{
	switch(a[i])
	{
	case 'A':c++;
		if(c>=2)
		{
		a[i]=a[i+1];
		ele--;
		}
		break;
	case 'B':c2++;
		if(c2>=2)
		{
		a[i]=a[i+1];
		//ele--;
		}
		break;
		
	}	
}

for(i=0;i<ele;i++)
printf("%c ",a[i]);
printf("\n");

}
