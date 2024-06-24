//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 
#include<stdio.h>
int main()
{
int a,b,c;

	printf("\n\n\t  Enter the Number  :");
	scanf("%d",&c);
    
	for(a=1;a<=c;a++)
     {
		printf("(");
          for(b=1;b<=a;b++)
               {
                printf("%d",b);
                if(b<a)
                        {
                            printf("+");
                        }
                 else if(b==a)
                 {
                   printf(")+");
                 }	
               }
     }

}
