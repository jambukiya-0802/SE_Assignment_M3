//23. C Program to Reverse a Number Using FOR Loop Series Program: 
#include<stdio.h>
main()
{
	int i,n,rem;
	
	printf("enter a number to revers:");
	scanf("%d",&n);
	

	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		n=n/10;
	}
}
