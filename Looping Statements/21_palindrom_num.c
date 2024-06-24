//22. Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
main()
{
int i,temp,n,rem,rev;
	
	i=0;
	while(i<5)
	        {	
                n=0;
                printf("\n\n Enter a palindrome number:");
                scanf("%d",&n);
                temp=n;
                rev=0;
                
                
                while(n>0)
                    {
                    rem=n%10;
                    rev=(rev*10)+rem;
                    n=n/10;
                    }
                    
                    if(rev==temp)
                        printf("\n is palidrome");
                    else
                        printf("\n is not palidrome");
                
                i++;	
            }

}

