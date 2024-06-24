//19_03_pattern
#include<stdio.h>
main()
{
		int r,c,n;
		n=1;
	
	r=1;
	while(r<=5)
	{
	    c=1;
		while(c<=r)
		{
		printf("%d",n);
		n++;
	    c++;
		}
		printf("\n");
		r++;
		
	}
}
