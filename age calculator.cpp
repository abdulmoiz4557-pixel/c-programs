
#include<stdio.h>
int main()
{int d,m,y,bd,bm,by,days,p,months,years;


printf("enter yours D.O.B IN dd/MM/yy");
scanf("%d,%d,%d",&bd,&bm,&by);
printf("enter today date");
scanf("%d,%d,%d",&d,&m,&y);
printf("enter previous month days number");
scanf("%d",&p);
days=(p+d)-bd;  
months=m-bm;
years=y-by;
printf("\n\tYEARS\tMONTHS\tDAYS ");
printf("\n\t%d\t%d\t%d",years,months,days);	
	return 0;
	
}
