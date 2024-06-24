//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5) 
#include<stdio.h>
main()
{
	int n,s,f,l,i,rem;
	printf("\n\n\t enter the number:");
	scanf("%d",&n);
	
	l=n%10;
	
while(n>0)
	{
		rem=n%10;
		n=n/10;
	}
	s=rem+l;
	printf("Sum of first and last digit = %d", s);
}
