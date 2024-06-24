/*31. Write a program in C to read any Month Number in integer and display the 
number of days for this month.*/
#include<stdio.h>
main()
{
	int m;
	
	printf("\n\n\t enter the numbe of month: ");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1:
			printf("\n\n\t month of day: 31");
			break;
		case 2:
			printf("\n\n\t month of day: 28");
			break;
		case 3:
			printf("\n\n\t month of day: 30");
			break;
		case 4:
			printf("\n\n\t month of day: 30");
			break;
		case 5:
			printf("\n\n\t month of day: 31");
			break;
		case 6:
			printf("\n\n\t month of day: 30");
			break;
		case 7:
			printf("\n\n\t month of day: 31");
			break;
		case 8:
			printf("\n\n\t month of day: 31");
			break;
		case 9:
			printf("\n\n\t month of day: 30");
			break;
		case 10:
			printf("\n\n\t month of day: 31");
			break;
		case 11:
			printf("\n\n\t month of day: 30");
			break;
		case 12:
			printf("\n\n\t month of day: 31");
			break;
		defult:
			printf("\n\n\t no month number:");
			break;
			
	}
	
}
