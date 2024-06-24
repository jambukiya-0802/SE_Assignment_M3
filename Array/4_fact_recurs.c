//4. WAP to find factorial using recursion 
#include<stdio.h>
main()
int f,n; 
{
	 printf("\n\n\t Enter the number : ");
     scanf("%d", &n);
     
     	if (n == 0)
     	{
     		return 1;
     	}
     	else
     	{
     	    return n * fact(n - 1);
		}
		printf("\n\n\t Factorial num : %d",f (n));
}
     	
