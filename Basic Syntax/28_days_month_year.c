//28.Convert years into days and months 
#include<stdio.h>
main()
{
	int y,d,m;
	
	printf("\n\n\t enter of the year:");
	scanf("%d",&y);
	
	d = y*365;
	m = y*12;
	
	printf("\n\n\t number of days %d:",d);
	printf("\n\n\t number of month %d:",m);
	
	
}
