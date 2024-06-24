//17.Calculate person’s insurance premium based on salary 
#include<stdio.h>
main()
{
	int a,b,mp;
	printf("\n\n\t enter your salary:");
	scanf("%d",&a);
	printf("\n\n\t enter the policy term in years:");
	scanf("%d",&b);
	mp=a/(b*12);
	printf("\n\n\t monthly premium %d",mp);
}
