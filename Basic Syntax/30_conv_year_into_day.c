//30. WAP to convert years into days and days into years 
#include<stdio.h>
main()
{
	int y,d;
	printf("\n\n\t enter of the year:");
	scanf("%d",&y);
	
	d=y*365;
	
	printf("\n\n\t number of day :%d",d);
	printf("\n\n\t enter the number of days: ");
	scanf("%d",&d);
	
	y=d/365;
	
	printf("\n\n\t number of the years : %d",y);
	
    
}

