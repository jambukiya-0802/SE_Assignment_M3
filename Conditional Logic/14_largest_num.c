//14.WAP to find the largest of three numbers. 
#include<stdio.h>
main()
{
	int x,y,z;
	printf("\n\n\t enter the number:");
	scanf("%d",&x);
	printf("\n\n\t enter the number:");
	scanf("%d",&y);
	printf("\n\n\t enter the number:");
	scanf("%d",&z);
	
	if(x > y && x > z)
	{
	    printf("\n\n\t The largest number: %d",x);	
	}
    else if(y > x && y > z)
	{
	    printf("\n\n\t The largest number: %d",y);	
	}
	else if(z > x && z > y)
	{
         printf("\n\n\t The largest number: %d",z);	
	}
	else
	{
     	exit(0);	
	}
	  
    
	
}
