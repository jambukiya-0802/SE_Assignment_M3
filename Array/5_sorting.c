/*5. WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice */
#include<stdio.h>
main()
{
	int arr[2], i, j, temp=0;
	for(i=0;i<2;i++)
	{
		printf("\n\n\t Input array element [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n\n\t Before Sorting...");
	for(i=0;i<2;i++)
	{
		printf("\n\n\t Array Element [%d] : %d",i, arr[i]);
	}
	
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<2;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
	}
	
	printf("\n\n\n\t After Sorting...");
	for(i=0;i<2;i++)
	{
		printf("\n\n\t Array Element [%d] : %d",i, arr[i]);
	}
}

