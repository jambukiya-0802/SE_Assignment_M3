//16. Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("\n\n\t enter a Natural number to sum:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\n\n\t sum :%d",sum);
	
 } 
