/*8. Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)*/
#include<stdio.h>
main()
{
	int n1,rem,max;
	printf("\n\n\t enter a number to find max:");
	scanf("%d",&n1);
	
	while(n1>0)
	{
		rem=n1%10;
		if(max<rem)
		    max=rem;
		n1=n1/10;
	}
	
		printf("\n\n\t max number is:",max);
 } 
