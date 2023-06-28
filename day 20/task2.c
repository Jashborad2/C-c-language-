#include<stdio.h>


void  main(){
	
	int a;
	
	printf("Enter the value  :");
	scanf("%d",&a);
	
	
	if(a%3==0 && a%5==0){
		printf("it is divsible by 3 and 5");
		
	}else{
		
		printf(" it is not divsible  by 3 and 5");
	}
}