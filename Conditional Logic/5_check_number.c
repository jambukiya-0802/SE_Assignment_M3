//5. Check Number Is Positive or Negative
#include<stdio.h>
main()
{
	int number;
	
	printf("\n\n\t enter a number:");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("\n\n\t number is positive:");
	}
	else if(number<0)
	{
		printf("\n\n\t number is negative:");
	}
}
