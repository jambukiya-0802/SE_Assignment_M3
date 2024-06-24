/*22. Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P */

#include<stdio.h>
main()
{
	int A,ci,p,r,t;
	printf("\n\n\t enter the value of p:");
	scanf("\n\n\t %d",& p);
	printf("\n\n\t enter the value of r:");
	scanf("\n\n\t %d",&r);
	t=(1+(r%100),t);
	A=p*t*t;
	printf("\n\n\t final interest i:%d",A);
    ci=A-p;
	printf("\n\n\t compound interest:",ci);
	
	
}
