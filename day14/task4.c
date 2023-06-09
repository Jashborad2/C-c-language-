#include<stdio.h>

void main(){
	
	int a,sum=0,b,c;
	
	printf("Enter value :");
	scanf("%d",&a);
		
	c=a%10;
	while(a>9){
		a=a/10;	
	}
	b=a;
	
	
  sum =b +c;
  printf("sum of first digit and last digit = %d",sum);
}