#include<stdio.h>
void main()

{
	int i=1,fact=1,n;
	printf("enter value:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact =fact*i;
		i++;
	}
	printf("the factorial of %d is = %d",n,fact);
	
}