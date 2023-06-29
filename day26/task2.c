#include<stdio.h>

void main(){
	
	int a;
	int b;
	int *c,*d;
	int e;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	
	c=&a;
	d=&b;
	
	e=*d;
	*d=*c;
	*c=e;
	
	printf("swapped value a : %d \n b: %d \n",a,b);
	
}