#include<stdio.h>
int main()
{int l,u,k,n,m;
printf("entr lower and upper limit");
scanf("%d,%d",&l,&u);

printf("eneter the number");
scanf("%d",&n);

for (k=1;k<=u;k++)
	if(k%n==0)
	m++;
	printf("multiples of %d b/w %d and %d =",n,u,l);
	printf("%d ",m);
	
	
	
	return 0;
	
	
}