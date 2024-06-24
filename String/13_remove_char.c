//13.Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
main()
{
	int i,e;
	char str[20];
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;)
	{
		if(!(str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			for(e=i;str[e]!=0;e++)
			{
				str[e]=str[e+1];
			}
		}
		else
		{
			i++;
		}
		
		
	}
	printf("\n\n\t String after removing non-alphabetic characters: %s", str);

}
