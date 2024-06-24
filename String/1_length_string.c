//1.Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
main()
{
	int a ,len;
	char s[40];
	
	printf("\n\n\t Enter a value : ");
	scanf("%s",&s);
	
	len=strlen(s);
	printf("\n\n\t length of string is : %d",len);
}
