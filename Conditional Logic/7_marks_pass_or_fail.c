//7. Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	int s1,s2,s3,s4,total=0;
	float pre;
	printf("\n\n\t Input mark for subject-1:");
	scanf("%d",&s1);
	printf("\n\n\t Input mark for subject-2:");
	scanf("%d",&s2);
	printf("\n\n\t Input mark for subject-3:");
	scanf("%d",&s3);
	printf("\n\n\t Input mark for subject-4:");
	scanf("%d",&s4);
	
	total=s1+s2+s3+s4;
	pre=total/4;
	
	printf("\n\n\t persentage: %f",pre);
	
	if(s1>=43 && s2>=43 && s3>=43 && s4>43)
	{
			if(pre>=80)
	printf("\n\n\t grade: A+");
	
	else if(pre>=70)
	printf("\n\n\t grade: B+");
	
	else if(pre>=60)
	printf("\n\n\t grade: C+");
	
	else if(pre>=50)
	printf("\n\n\t grade: D");
	}
	
	if(pre>=50)
	printf("\n\n\t gread: pass"); 
	else 
	printf("\n\n\t grede: Fail");

	
		
}
 
