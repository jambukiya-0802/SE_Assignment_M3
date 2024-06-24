//11. WAP to find number is even or odd using ternary operator 
#include<stdio.h>
main()
{
	int i;
	
	printf("\n\n\t enter the number:");
	scanf("%d",&i);
	
	if(i%2==0)
		printf("\n\n\t %d number is even",i);
	else
		printf("\n\n\t %d number is odd",i);
}
