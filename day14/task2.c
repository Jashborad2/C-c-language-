#include<stdio.h>

void main()

{
	int i=1,n;
	
	printf("Enter the value :");
	scanf("%d",&n);
	
	while(i<=10){
		
    printf("%d X %d =%d \n",n,i,i*n);
	i++;	
	}
}