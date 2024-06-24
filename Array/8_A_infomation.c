/*8. WAP to reverse a string and check that the string is palindrome or not 
Write a program of structure employee that provides the following 
a. information -print and display empno, empname, address andage */
 
#include<stdio.h>
main()
{
    int emp_no,emp_age;           
	char emp_name[25],emp_add[50];
	
	printf("\n\n\t Enter Employe id No : ");
	scanf("%d",&emp_no);
	
	printf("\n\n\t Enter Employee Name  : ");
	scanf("%s",&emp_name);
	
	printf("\n\n\t Enter Employee Add : ");
    scanf("%s",&emp_add);
	
	printf("\n\n\t Enter Employee Age  : ");
	scanf("%d",&emp_age);
	
    printf("\n\n\t Name : %s",emp_name);
	printf("\n\n\t ID : %d",emp_no);
	printf("\n\n\t Age : %d",emp_age);
    printf("\n\n\t Address : %s",emp_add);

		
} 
