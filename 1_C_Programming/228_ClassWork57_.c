#include<stdio.h>
main()
{
static int i=0;
printf("helloo...\n");
i++;
if(i<3)
main();
printf("haii...\n");

}

