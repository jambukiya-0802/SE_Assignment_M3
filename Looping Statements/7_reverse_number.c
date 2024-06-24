//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 
#include<stdio.h>
main()
{
	int i,rem;
	
	printf("\n\n\t enter a number a revers:");
	scanf("%d",&i);
	
	while(i>0)
	{
		rem=i%10;
		printf(" %d",rem);
		i=i/10;
	}
}
