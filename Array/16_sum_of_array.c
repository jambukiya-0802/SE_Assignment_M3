//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
main()
{
	int a,n[5],sum=0;
	
	for(a=1;a<=5;a++)
	{
		printf("\n\n\t enter the number : ",a);
		scanf("%d",&n[a]);
		
	}
	for(a=1;a<=5;a++)
	{
		printf("\n\n\t n[%d] : %d",a,n[a]);
		sum=sum+n[a];
	}
	printf("\n\n\t Sum = %d",sum);
}
