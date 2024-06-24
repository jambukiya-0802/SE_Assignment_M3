//10. Write a program in C to extract a substring from a given string 
#include<stdio.h>
main()
{
	int p=5,l=3;
	char str[40],sub[40];
	
	printf("\n\n\t enter a string:");
	scanf("%s",&str[40]);
	
	strncpy(sub,str+p,l);
	sub[l]= '\0';
	
	printf("\n\n\t Extract A Substring : %s",sub);
}
