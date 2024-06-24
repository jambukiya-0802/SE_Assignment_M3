//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
main()
{
	char h;
	
	printf("\n\n\t enter the character:");
	scanf("%c",&h);
	 if(h >= 'A' && h <= 'Z')
    {
        printf("\n\n\t is uppercase alphabet.", h);
    }
    else if(h >= 'a' && h <= 'z')
    {
        printf("\n\n\t is lowercase alphabet.", h);
    }
    else
    {
        printf("\n\n\t is not alphabet.", h);
    }
}
