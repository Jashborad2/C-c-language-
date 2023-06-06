#include <stdio.h>

void main()
{
     char a;
     printf(" enter input :");
     scanf("%c",&a);
     
     if(a>='a'&& a<='z' ){
     	printf(" IT IS CHAR ");
     	
	 }
	 else if(a>='0' && a<='9'){
	 	printf(" IT IS DIGIT");
	 }
	 else{
	 	printf(" IT IS SPECIAL CHAR");
	 }
}