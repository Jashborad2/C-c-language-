#include<stdio.h>

void main(){
	
	
	int a,b,c,d,e;
	 printf("Enter value of A :");
	scanf("%d",&a);
    printf("Enter value of b :");
	scanf("%d",&b);
	printf("Enter value of c :");
	scanf("%d",&c);
	printf("Enter value of d :");
	scanf("%d",&d);
	printf("Enter value of e :");
	scanf("%d",&e);
	
	a>b ? a>c ?a>d?a>e?printf(" a is max"):printf("e is max"):d>e?printf(" d is max"):printf(" e is max"):c>d?c>e?printf(" c is max"):printf(" e is max"):d>e?printf(" d is max"):printf(" e is max"):b>c?c>d?d>e?printf(" d is max"):printf("e is max"):c>e?printf(" c is max"):printf("e is max"):b>d?b>e?printf(" b is max"):printf(" e is max"):d>e?printf(" d is max"):printf("e is max");
	
}