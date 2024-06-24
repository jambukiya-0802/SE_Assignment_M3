/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow : 
20. Unit 21. Charge/unit 
22. upto 350 23. @1.20 
24. 350 and above but less than 600 25. @1.50 
26. 600 and above but less than 800 27. @1.80 
28. 800 and above 29. @2.00*/

#include<stdio.h>
main()
{
	int Id,u;
    char n[20];
    
    printf("\n\n\t enter your coustomer Id:");
    scanf("%d",&Id);
    
    printf("\n\n\t enter the unit:");
    scanf("%d",&u);
    
    printf("\n\n\t enter the name:");
    scanf("%s",&n);
    
    if(u<350)
    	printf("\n\t charge=1.20@");
    	
    else if(u>=350 && u<600)
    	printf("\n\t charge=1.50@");
    	
    else if(u>=600 && u<800)
	    printf("\n\t charge=1.80@");
		
	else if(u>800)
		printf("\n\n\t charge=2.00@");
				
	

}
