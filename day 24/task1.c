#include<stdio.h>

int  sum(int a,int b){
	
	printf("sum : %d \n",a+b);
}

int  min(int a,int b){
	
	printf("min : %d \n",a-b);
}

int  div(int a,int b){
	
	printf("div : %d \n",a/b);
}

int  multi(int a,int b){
	
	printf("multi : %d \n",a*b);
}


int main()
{
	
		
	
	int a,b;
	char c;
	
	while(1){
	
	
	printf("ENTER THE FIRST VALUE :");
	scanf("%d",&a);
	
	printf("ENTER THE second VALUE :");
	scanf("%d",&b);
	
	printf("Enter the opertaion :");
	scanf(" %c",&c);
	
	switch(c){
		
		case '+':
			sum(a,b);
			break;
			
		case '-':
			min(a,b);
			break;
			
    	case '/':
			div(a,b);
			break;
			
			
		case '*':
			multi(a,b);
			break;
			
		default:
			printf("in valid !!");
			break;
			
		
		
	}
}
return 0;
}