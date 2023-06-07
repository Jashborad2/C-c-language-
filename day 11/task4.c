#include <stdio.h>

void main()
{
	char a;
	printf("enter the first alphabet of day :");
	scanf("%c",&a);
	
	switch(a){
		case 'M':
			printf("monday");
			break;
		case 'T':
			printf("tuesday");
			break;
		case 'W':
			printf("wednesday");
			break;
	    case 'H':
			printf("thursday");
			break;				
		case 'F':
			printf("friday");
			break;
		case 'A':
			printf("saturday");
			break;
		case 'S':
			printf("sunday");
			break;	
	   default:
	   printf("invalid !!");
	   break;	
	}
}
