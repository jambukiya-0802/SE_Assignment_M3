/*37. WAP to show 
i. Monday to Sunday using switch case  */

#include<stdio.h>
main()
{
	int d;
	
	printf("\n\n\t enter the number:");
	scanf("%d",&d);
	
	switch(d)
	{
		case 1:
	     	printf("\n\n\t Monday:");
	     	break;
	     case 2:
	     	printf("\n\n\t Tuesday:");
	     	break;
	     case 3:
	     	printf("\n\n\t Wednesday:");
	     	break;
		 case 4:
	     	printf("\n\n\t Thursday:");
	     	break;
		 case 5:
	     	printf("\n\n\t Friday:");
	     	break;
		 case 6:
	     	printf("\n\n\t Saturday:");
	     	break;
		 case 7:
	     	printf("\n\n\t Sunday:");
	     	break;	 	 	 	 		 	
	     default:
		    printf("\n\n\t invalid number:");	
	}
	     
}
