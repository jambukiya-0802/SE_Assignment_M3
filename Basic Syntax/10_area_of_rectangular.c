//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main()
{
	int a,w,h,l;
	printf("\n\n\t enter the value of w:");
	scanf("\n\n%d",&w);
	printf("\n\n\t enter the value of l:");
	scanf("\n\n%d",&l);
	printf("\n\n\t enter the value of h:");
	scanf("\n\n%d",&h);
	a=2*((w*l)+(h*l)+(h*w));
	printf("\n\n\t prism formula %d",a);
}
