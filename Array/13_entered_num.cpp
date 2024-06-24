//13. WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
main()
{
	int i,n[5];

	for(i=0;i<5;i++)
	{
		printf("\n\n\t enter number :");
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			printf("number is even.");
		}
		else
		{
			printf("number is not even.");
		}
			printf("\n\n");
	}	
}
