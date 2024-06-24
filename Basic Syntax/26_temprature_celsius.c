//26.Convert temperature Fahrenheit to Celsius 
#include<stdio.h>
main()
{
	float f,c=0;
	
	printf("\n\n\t enter temperature in Fahrenhei  :");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("\n\n\t Fahrenheit to celsius: %f",c);
}
