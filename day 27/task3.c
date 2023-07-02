#include<stdio.h>

void main()
{
	
	int n ;
	
	printf("Enter the size :");
	scanf("%d",&n);
	
	int a[n],*b,i;
	
	for(i=0;i<n;i++){
		printf("Enter the elements :");
		scanf("%d",&a[i]);
		
		b =&a[n-1];
	}
	
	printf(" \n Elements in reverse order : \n");
	
	for(i=0;i<n;i++){
		
		printf("%d \n",*b--);
	}
}