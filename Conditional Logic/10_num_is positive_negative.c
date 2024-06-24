//10. WAP to check whether a number is negative, positive or zero. 
#include<stdio.h>
main()
{
	int n;
	
	printf("\n\n\t enter the number:");
	scanf("%d",&n);
	
	 if(n > 0)
    {
        printf("\n\n\t Number is Posotive:");
    }
    if(n < 0)
    {
        printf("\n\n\t Number is Negative:");
    }
    if(n == 0)
    {
        printf("\n\n\t Number is Zero");
    }
}
