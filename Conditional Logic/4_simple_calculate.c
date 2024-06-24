/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t enter the number:");
	scanf("%d",&a);
	printf("\n\n\t enter the number:");
	scanf("%d",&b);
	
	printf("\n\n\t---------------------------------------");
	printf("\n\n\t prees for 1 Addition:");
	printf("\n\n\t prees for 2 Subtraction:");
	printf("\n\n\t prees for 3 Multiplication:");
	printf("\n\n\t prees for 4 Division:");
	printf("\n\n\t prees for 5 exit:");
	printf("\n\n\t enter the number:");
	
	scanf("%d",&c);
	if(c==1)
	{
		printf("\n\t Addition: %d ",a+b);
		
	}
	else if(c==2)
	{
		printf("\n\t Subtraction: %d",a-b);
	}
	else if(c==3)
	{
		printf("\n\t Multiplication: %d",a*b);
	}
	else if(c==4)
	{
		printf("\n\t Division: %d",a/b);
	}
	else if(c==5)
	{
		exit(0);
	}
	else
	{
			printf("\n\n\t -------try again-----");
	}

}
 
