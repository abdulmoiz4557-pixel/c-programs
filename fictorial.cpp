#include<stdio.h>
int main()
{int fict,k,n;
printf("enter number");
scanf("%d",&n);
fict=1;
for(k=1;k<=n;k+1)
{fict=fict*k;
}
printf("fictorial=%d",fict);
return 0;
}
