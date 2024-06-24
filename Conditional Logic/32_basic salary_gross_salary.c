/*32. Write a C program to input basic salary of an employee and calculate its 
Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%\ */
#include<stdio.h>
main()
{
	int bs,hra,gs,da;
	
	printf("\n\n\t enter the basic salary of employee:");
	scanf("%d",&bs);
	
	if(bs<=10000)
	{
		hra=bs*0.20;
		da=bs*0.80;
	}
	else if(bs>20000)
	{
		hra=bs*0.25;
		da=bs*0.90;
	}
	else if(bs<=20000)
	{
		hra=bs*0.30;
		da=bs*0.99;
	}
		gs=bs+hra+da;
		printf("\n\n\t gross salary is empoyee:%d",gs);
}
