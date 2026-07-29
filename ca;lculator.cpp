#include<stdio.h>
int main()
{int a,b;
char op ;


printf("enter two numbers ");
scanf("%d,%d",&a,&b);
printf("enter operator *-+/");
scanf("%c",&op);

switch(op) {case'+':{printf("sum=%d",a+b);  break;}
{
case'-':
	printf("difference=%d",a-b);   break;}
	
	{
	case'*':
		printf("product=%d",a*b); break;}
		
		{
		case'/': printf("divide=%f",a/b); break;}
	
	default: printf("invaild input");
}
return 0;
}