//3. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
main()
{
	int a,b;
	char str[10];
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str[10]);
	
	while(str[b]!=0)
	{
		b++;
	}
	
	printf("\n\n\t reverse");
	
	for(a=b-1;a>=0;a--)
	{
		printf("\n\n\t %c ",str[a]);
	}
}
