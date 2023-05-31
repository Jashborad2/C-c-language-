#include <stdio.h>

void main()
{
	int a,b,c;
	printf("Enter any three number :");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		printf("%d is min value",a);
	}
	if(b<a && b<c){
		printf("%d is min value",b);
	}
	if(c<a && c<b){
		printf("%d is min value",c);
	}
	
}