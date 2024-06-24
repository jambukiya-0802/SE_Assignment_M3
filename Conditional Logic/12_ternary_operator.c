//12. WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int F1,F2,F3;
	
	printf("\n\n\t Input number F1 :");
	scanf("%d",&F1);
	printf("\n\n\t Input number F2 :");
	scanf("%d",&F2);
	printf("\n\n\t Input number F3 :");
	scanf("%d",&F3);
	
	(F1>F2 && F1>F3)?printf("\n\n\tF1 is max"):(F2>F1 && F2>F3)?printf("\n\n\t F2 is max"):(F3>F1 && F3>F2)?printf("\n\n\t F3 is max"):printf("\n\n\t number are same");
}
