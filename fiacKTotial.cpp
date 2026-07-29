#include<stdio.h>
int main()
{int a,b,rem1,rem2,small,gcd,k;

printf("enter two numbers");
scanf("%d,%d",&a,&b);

if(a<b)
{small=a;
}else {small=b;
}
	for(k=2;k<=small;k+2)
	{rem1=a%2;  rem2=b%2;
	if(rem1==0&&rem2==0)
	{gcd=k;
	}
	}
	printf("gCD=%d",gcd);
	
	return 0;
}