//1. Write a program to find out the max number from given array using function 
#include<stdio.h>
main()
{
	int arr[5], i, max;
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Input array element [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Array Element [%d] : %d",i, arr[i]);
	}
	
	max=arr[0];
	
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
			max=arr[i];	
	}
	
	printf("\n\n\t Maximum element from the array : %d", max);
}
