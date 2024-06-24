//4. WAP to print table up to given numbers 
#include<stdio.h>
main()
{
	int a,i;
	
	printf("\n\n\tenter a number to print the table:");
	scanf("%d",&a);
	
	i=1;
	while(i<=10)
	{
		
		printf("\n\n\t %d * %d = %d",a,i,a*i);
		i++;
		
	}
}
