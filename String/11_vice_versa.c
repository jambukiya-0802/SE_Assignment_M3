/*11. Write a program in C to read a sentence and replace lowercase characters with 
uppercase and vice versa. */

#include<stdio.h>
main()
{
	
	char str[20];
	
	printf("\n\n\t Enter a string  : ");
	scanf("%s",&str);
	
	printf("\n\n\t Replace Lowercase Characters Uppercase : %s",strupr(str));
}
