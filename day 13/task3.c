#include<stdio.h>
void main(){
	
	int i=1;
	int n;
	printf("Enter value :");
	scanf("%d",&n);
	do{
		printf("%d \n ",i);
		i++;
	}while(i<=n);
}