#include<stdio.h>

void main()

{
	int a;
	printf("Enter any digit :");
	scanf("%d",&a);
	a%2?printf("value is odd"):printf("value is even");
}