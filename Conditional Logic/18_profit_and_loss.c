//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
	int c,s,p,l;
	printf("\n\n\t enter the cost price:");
	scanf("%d",&c);
	printf("\n\n\t enter the selling price:");
	scanf("%d",&s);
	
	p= s - c;
	l= c - s;
	
	if(s > c)
	{
	    printf("\n\n\t profit: %d",p);
	}
	else if(c < s)
	{
		printf("\n\n\t loss: %d",l);
	}
	else
	{
		printf("\n\n\t No profit No loss:");
	}
	
}
