//7. Write a program in C to copy one string to another string. 
#include<stdio.h>
main()
{
	int i;
	char str1[70],str2[70];
	
	printf("\n\n\t Enter a string :");
	scanf("%s",&str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("\n\n\t Enter a string :%s",str2);
}

