//2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
main()
{
	int a;
	char str[70];
	
	printf("\n\n\t Enter a value : ");
	scanf("%s",&str[70]);
	
	printf("\n\n\t Individual");
	for(a=0;str[a]!=0;a++)
	{
		printf("\n\n\t %c ",str[a]);
	}
}
