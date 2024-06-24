/*20. Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary. */
#include<stdio.h>
main()
{
	float a,i,l,r;
	printf("\n\n\t enter the salary:");
	scanf("%f",&a);
	i=a*0.1;
	l=a*0.1;
	r=a-(i+l);
	printf("\n\n\t remaining salary:%f",r);
}
