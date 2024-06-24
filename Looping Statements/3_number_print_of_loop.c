/*3. WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers */
#include<stdio.h>
main()
{
	int i, e_sum=0,o_sum=0;
	
	printf("\n\n\t even number:");
	
	i=2;
	while(i<10)
	{
		printf(" %d",i);
		i=i+2;
	}
	
	printf("\n\n\t odd numbers:");
	
	i=1;
	while(i<=10)
	{
		printf(" %d",i);
		i=i+2;
		
	}
	
	
	i=2;
	while(i<=10)
	{
		e_sum=e_sum+i;
		i=i+2;
	}
	
	printf("\n\n\t sum of even number 1 to 10: %d",e_sum);
	

    i=1;
	while(i<=10)
	{
		o_sum=o_sum+i;
		i=i+2;
	}
	
	printf("\n\n\t sum of odd number 1 to 10: %d",o_sum);
	
}
