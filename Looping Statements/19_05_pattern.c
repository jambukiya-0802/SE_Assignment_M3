//19.05_patten.
#include<stdio.h>
main()
{
	int r,c,s;
	
	printf("\n\n");
	
	r=1;
	while(r<=5)
	{
		s=4;
		while(s>=r)
		{
			printf("  ");
			s--;
		}
		
		c=1;
		while(c<=r)
		{
			printf("  * ");
			c++;
		}
		printf("\n");
		r++;
	}
	     
}
