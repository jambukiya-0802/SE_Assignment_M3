//19.04_patten.
#include<stdio.h>
main()
{
	int r,c;
	r=1;
	
	while(r<=5)
	{
		c=1;
		char i='a';
		while(c<=r)
		{
			printf("%c",i);
			c++;
			i++;
		}
		printf("\n");
		r++;
	}
}
