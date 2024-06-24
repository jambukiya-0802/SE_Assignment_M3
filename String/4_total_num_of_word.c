//4.Write a program in C to count the total number of words in a string. 
#include<stdio.h>
main()
{
	int x,n;
	char str[30];
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str[30]);
	
	for(x=0;str[x]!=0;x++)
	{
		n++;
	}
	printf("\n\n\t total number of words:%d",n);
}
