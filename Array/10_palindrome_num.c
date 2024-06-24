//10. WAP to perform Palindrome number using for loop and function 
#include<stdio.h>
main()
{
	int num, r, p;
	
    r = 0, num= num ;
    
     while (num != 0) 
    {
        r = r * 10 + num % 10;
        num /= 10;
    }
    
    if (r == num)
        return 1;
    else
        return 0; 
}

    printf("\n\n\t Enter a number:");
    scanf("%d",&num);
    
    if (P(num))
        printf("\n\n\t palindrome number %d:", num);
    else
        printf("\n\n\t a not palindrome number %d:", num);
    
    return 0;

	
}
