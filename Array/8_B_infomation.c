/*b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address andage */

#include<stdio.h>
main()
{
	int i,emp_no,emp_age,emp[5];           
	char emp_name[25], emp_add[20];
	
	  for(i=0;i<5;i++)
	
     {
          printf("\n\n\t Enter Employee Name :");
          scanf("%s",&emp_name);
          
          printf("\n\n\t Enter Employe ID No :");
          scanf("%d",&emp_no);
          
          printf("\n\n\t Enter Employee Age :");
          scanf("%d",&emp_age);

          printf("\n\n\t Enter Employee Add :");
          scanf("%s",&emp_add);
        
          printf("\n\n\t Name : %s",emp_name);
          printf("\n\n\t ID : %d",emp_no);
          printf("\n\n\t Age : %d",emp_age);
          printf("\n\n\t Address : %s",emp_add);
     }
    
}
