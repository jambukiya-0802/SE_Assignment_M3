//19.06_patten.
#include<stdio.h>
main()
{
int r,c;
	
	for(r=1;r<=5;r++)
	{

		for(c=1;c<=r;c++)
			{
				printf(" * ");
			}
		
		
		printf("\n");
	}
	for(r=1;r<=4;r++)
	{
		for(c=4;c>=r;c--)
			{
				printf(" * ");
			}
		
		
		printf("\n");
	}
	
}
