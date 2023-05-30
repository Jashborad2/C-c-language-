#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter your value of A:");
	scanf("%d",&a);
	printf("Enter your value of B :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("value of A :%d\n",a);
	printf("value of B :%d ",b);
}