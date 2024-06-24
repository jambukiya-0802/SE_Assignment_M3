/*6.Write a program in C to count the total number of alphabets, digits and special 
characters in a string. */
#include<stdio.h>
main()
{
	int i,a,d,c;
	char str[20];
	
	printf("\n\n\t Enter a number : ");
	scanf("%s",&str[i]);
	
	for(i=0;str[i]!=0;i++)
	{
		if((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
		a++;
	
	else if(str[i]>='0' && str[i] <='9')
	d++;
	
    else
	c++;
    }
	printf("\n\n\t Total Number of Alphabets : %d",a);
	printf("\n\n\t Total Number of Digits : %d",d);
	printf("\n\n\t Total Number of Characters : %d",c);
}
