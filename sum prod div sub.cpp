#include<stdio.h>
int main()
{int x,y,add,sub,prod,rem;
float div;
printf("enter two number");
scanf("%d,%d",&x,&y);
add=x+y;
sub=x-y;
prod=x*y;
rem=x%y;
div=x/y;
printf("|\nsum=%d",add);
printf("\nsub=%d",sub);
printf("\nprod=%d",prod);
printf("\nrem=%d",rem);
printf("\ndiv=%f",div);

return 0;
	
	
	
}
