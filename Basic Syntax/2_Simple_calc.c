///2.Write a program to make simple calculator (to make addition,substraction,multiplication,division and modulo).

#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t enter any two value: ");
	scanf("%d %d",&a, &b);
	
	c = a + b;
	printf("\n\n\t addition of %d + %d= %d",a, b, c);
	
	c= a - b;
	printf("\n\n\t substraction of %d - %d=%d",a ,b, c);
	
	c= a * b;
	printf("\n\n\t multipliction of %d * %d=%d",a ,b, c);
	
	c= a / b;
	printf("\n\n\t division of %d / %d=%d",a ,b, c);
	
	c= a % b;
	printf("\n\n\t modulo of %d & %d=%d",a ,b, c);
	
}
