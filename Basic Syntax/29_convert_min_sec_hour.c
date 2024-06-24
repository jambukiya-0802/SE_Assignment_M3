//29.Convert minutes into seconds and hours
#include<stdio.h>
main()
{
	int m,s,h;
	
	printf("\n\n\t enter of the m:");
	scanf("%d",&m);
	
	s=m*60;
	h=m/60;
	
	printf("\n\n\t number of min %d",m);
	printf("\n\n\t number of sec %d",s);
}
