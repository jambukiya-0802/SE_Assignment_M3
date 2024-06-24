//3. WAP to find reverse of string using recursion
#include<stdio.h>
main()
{
	char a[40];
	printf("\n\n\t enter the reverse number : ");
	scanf("%s",&a[40]);
	print_reverse(a);
	printf("\n");
}
void print_reverse(char*a)
{
	if(*a!='\0')
	{
	print_reverse(a + 1);
	printf("%c",*a);
	}
	printf("\n");		

}
