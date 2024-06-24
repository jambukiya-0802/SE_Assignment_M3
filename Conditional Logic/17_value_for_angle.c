/*17. Write a C program to check whether a triangle can be formed with the given 
values for the angles.*/
#include<stdio.h>
main()
{
	int a1,a2,a3,sum;
	
	printf("\n\n\t  first angle of the triangle: ");
	scanf("%d",&a1);
	printf("\n\n\t  second angle of the triangle: ");
	scanf("%d",&a2);
	printf("\n\n\t  third angle of the triangle: ");
	scanf("%d",&a3);
	
	sum =a1 + a2 + a3;
	
	printf("\n\n\t Treingle value are: %d",sum);
	
	if(sum==180)
	{
	   printf("\n\n\t Treingle is valid");	
	}
	else
	{
	   printf("\n\n\t tringle is not valid");	
	}
		
} 
