//5. WAP to print factorial of given number
#include<stdio.h>
main()
{
	int i, n, a=1;
	
	printf("\n\n\t enter the number:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		a=a*i;
		i++;
		
	}
	printf("\n\n\t factorial of %d is %d",n,a);
}
