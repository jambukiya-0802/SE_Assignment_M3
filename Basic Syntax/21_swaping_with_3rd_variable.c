/*21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable*/
#include<stdio.h>
main()
{
	int n1,n2,n3,num1,num2;
	printf("\n\n\t enter the value of n1:");
	scanf("%d",&n1);
	printf("\n\n\t enter the value of n2:");
	scanf("%d",&n2);
	printf("____________________________________________________");
	printf("\n\n\t\t befor swaping");
    printf("\n\n\t\t n1=%d n2=%d",n1,n2);
    n3=n1;
    n1=n2;
    n2=n3;
    printf("\n_____________________________________________________");
    printf("\n\n\t\t after  swaping");
    printf("\n\n\t\t n1=%d n2=%d",n1,n2);
    printf("\n___________________________________________________");
    printf("\n\n\t\t Enter the value of num1:");
    scanf("\n\n\t\t %d",&num1);
    printf("\n\n\t\t Enter the value of num2:");
    scanf("\n\n\t\t %d",&num2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t befor swaping");
    printf("\n\n\t\t num1=%d num2=%d",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n_____________________________________________________");
    printf("\n\n\t\t after swaping");
    printf("\n\n\t\t num1=%d num2=%d",num1,num2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t num1=%d",num2);
    printf("\n\n\t\t num2:%d",num1);
    printf("\n_____________________________________________________");
}
