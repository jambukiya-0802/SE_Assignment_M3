//14.Accept 5 numbers from user and find those numbers factorials 
#include<stdio.h>
main()
{
	int n,l,i,fact;
	
	for(i=0;i<=5;i++)
	{
		
		printf("\n\n\t enter a number to find Factorial:");
		scanf("%d",&n);
		fact=1;
		
	}
	for(l=0;l<n;l++)
	{
		fact=fact*l;
	
	}
	printf("\n\n\t factorial of %d is :%d",n,fact);


}
