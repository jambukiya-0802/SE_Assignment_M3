//15. Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
main()
{
	int n[5],x,y,temp;
	
	for(x=0;x<5;x++)
	{
		printf("\n\n\t enter the number : ");
		scanf("%d",&n[x]);
	}
	for(x=0;x<5;x++) 
	{
        for(y=0;y<5-x-1;y++)
		{
            if(n[y]>n[y+1])
			{
                tem=n[y];
                n[y]=n[y+1];
                n[y+1]=tem;
            }
        }
    }
    printf("\n\n\t Numbers in ascending order: ");
    for(x=0;x<5;x++) 
	{
        printf("\n\n\t n[%d] : %d ",x,n[x]);
    }
}
