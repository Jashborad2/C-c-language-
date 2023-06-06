#include <stdio.h>

void main(){
	
	int a,b,c;
	
    printf("Enter value of A :");
	scanf("%d",&a);
    printf("Enter value of b :");
	scanf("%d",&b);
	printf("Enter value of c :");
	scanf("%d",&c);
	
	a>b ? a>c ? printf(" %d is max",a) :printf(" %d is max",c) : b>c ? printf("%d is max",b): printf(" %d is max",c);
	
}