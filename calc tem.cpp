#include<stdio.h>
int main()
{int a,b;
char op;
printf("enter two numbers");
scanf("%d,%d",&a,&b);

printf("enter operators / * -+");
scanf("%c",&op);

if(op==+) {printf("sum =%d",a+b);

}
else if(op==-)
{printf("dffrence=%d",a-b);

}else if(op==*){printf("product =%d",a*b);
}
	return 0;
	
}