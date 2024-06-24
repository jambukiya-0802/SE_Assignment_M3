//19.Calculate compound interest
#include<stdio.h>
main()
{
	int A,p,r,t;
	printf("\n\n\t Enter the Principal amount(P):");
	scanf("%d",&p);
	printf("\n\n\t Enter the interest rate(r):");
	scanf("%d",&r);
	t=(1+(r%100));
	A=p*t*t;
	printf("\n\n\t compound interest %d",A);
}
