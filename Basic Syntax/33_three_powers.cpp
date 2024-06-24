//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
main()
{
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	
	printf("\n\n\t first three powers: %d",a);
	printf("\n\n\t %d^1 = %d",a,a);
	printf("\n\n\t %d^2 = %d",a,a*a);
	printf("\n\n\t %d^3 = %d",a,a*a*a);
	
}
