//17.WAP to show difference between Structure and Union.
#include<stdio.h>
main()
{
	struct stud_info
	{
		int rollno;
		char name[20], city[10];
		
		struct stud_marksheet
	{
		float per;	
		char grade;
	}SM;
	
}SP;
		
	SP.rollno=10;
	strcpy(SP.name,"rahul");
	SP.SM.per=74.88;
	
	printf("\n\n\t Rollno : %d",SP.rollno);
	printf("\n\n\t Name : %s",SP.name);
	printf("\n\n\t Percentages : %f",SP.SM.per); 
}
