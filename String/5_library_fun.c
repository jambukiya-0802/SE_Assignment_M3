//5.Write a program in C to compare two strings without using string library functions
#include<stdio.h>
main()
{
	int i;
	char s1[30],s2[30];
	
	printf("\n\n\t Enter a number 1 : ");
	scanf("%s",s1);
	printf("\n\n\t Enter a number 2 : ");
	scanf("%s",s2);
	
	if(s1[i]%s2[i]==0)
	{
		printf("\n\n\t string is equal");
	}
	else
	{
		printf("\n\n\t string is not equal");
	}
}
