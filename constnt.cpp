#include<stdio.h>

int main()

{
char vw;

printf("Enter Alphabet Letter Either Small or Capital : ");
scanf("%c", &vw);

switch(vw)
{
	case 'a':
		case'A':
	case 'e':
		case'E':
	case 'i':
		case'I':
	case 'o':
		case'O':
	case 'u':
	     case'U':
	
printf("%c is the Vowel",vw);
break;

default:
printf("%c is the Consonant",vw);
break;

}

return 0;
}
