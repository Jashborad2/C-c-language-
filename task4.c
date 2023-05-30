#include <stdio.h>
void main()
{
	int a,b;
	printf("enter your value of A :");
	scanf("%d",&a);
	printf("Enter your value of B :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
		printf("value of A :%d\n",a);
	printf("value of B :%d ",b);
}