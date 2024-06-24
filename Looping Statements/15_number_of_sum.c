//15.Calculate sum of 10 numbers using of while loop 
#include<stdio.h>
main()
{
	int a,sum=0;
	a=1;
	printf("\n\n\t enter a number:");
	scanf("%d",&a);
	
	while(a<=10)
	{
		sum=sum+a;
		printf("\n\n\t Sum = %d",sum);
		a=a+1;
	}
	printf("\n\n\t Total sum of 1 to 10:%d",sum);
}
