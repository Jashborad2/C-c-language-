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
	    case 'TH':
			printf("thursday");
			break;				
		case 'F':
			printf("friday");
			break;
		case 'SA':
			printf("saturday");
			break;
		case 'SU':
			printf("sunday");
			break;	
	   default:
	   printf("invalid !!");
	   break;	
	}
}