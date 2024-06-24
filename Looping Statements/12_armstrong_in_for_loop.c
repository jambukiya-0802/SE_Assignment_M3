//12. Program of Armstrong Number in C Using For Loop 
#include<stdio.h>
main()
{
	int n,rem,sum=0,temp;
	
	printf("\n\n\t enter a number:");
	scanf("%d",&n);
	
	for(temp=n;n>0;n=n/10)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		
	}
	if(sum==temp)
	
	{
		printf("\n\n\t  number is Armstrong:");
		
	}	
	else
	{
		printf("\n\n\t number is not Armstrong:");
	}
}
