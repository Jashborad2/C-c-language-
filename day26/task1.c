#include <stdio.h>

void main(){
	
	int a;
	int *b;
	
	printf("Enter the value :");
	scanf("%d",&a);
	
	b=&a;
	
	printf("%u => %d ",b,(*b)*(*b));
	
	
}