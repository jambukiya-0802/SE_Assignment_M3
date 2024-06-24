/*8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height.*/
#include<stdio.h>
main()
{
	float height;
	
	printf("\n\n\t enter the hight:");
	scanf("%f",&height);
	
	if(height<=160.0)
	{
		printf("\n\n\t person height is small... ");
	}
	else if(height > 165.0 && height <= 195.0)
	{
	printf("\n\n\t person height is midiam:");
	}
	else if(height >= 150.0 && height <= 165.0)	
	{
	printf("\n\n\t person height is Tall:");
    }
    else
    {
    	printf("\n\n\t person is smollest:");
	}
} 
