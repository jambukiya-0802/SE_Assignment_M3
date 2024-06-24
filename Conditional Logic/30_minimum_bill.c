/*30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
minimum bill should be of Rs. 256/-*/
#include<stdio.h>
main()
{
	int a,sc;
	
	printf("\n\n\t enter the bill amount:");
	scanf("%d",&a);
	sc=a*0.18;
	printf("\n--------------------------------------");
	{
		printf("\n\n\t user your bill amount highr then 800:");
		printf("\n\n\t way you have to pay extra charges:");
		printf("\n\n\t you have to pay this extra on your bill amount:%d",sc);
	}
	if(a>=256)
	{
		printf("\n\n\t Ensure minimum bill is Rs.256:");
	}
	else if(a<800)
	{
		printf("\n\n\t Apply surcharge if bill exceeds Rs. 800:");
	}
	else
	{
		printf("\n\n\t Dear user your bill is not valid:");
	}
}
