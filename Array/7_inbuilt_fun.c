//7.WAP Find out length of string without using inbuilt function 
#include<stdio.h>
main()
{
	int a=0;
	 char str[]="Hello my name is milan";
     while(str[a]!=NULL)
     {
          a++;
     }
     printf("\n\t Length of string is : %d ",a);
     
}
