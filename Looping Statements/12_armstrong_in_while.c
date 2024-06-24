//12. Program of Armstrong Number in C Using While loop
#include<stdio.h>
main()
{
	int n,rem,sum=0,temp;
	
		printf("\n\n\t enter a number:");
    	scanf("%d",&n);
    	
    	    temp=n;
    		while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
		
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

