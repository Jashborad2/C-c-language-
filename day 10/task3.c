#include <stdio.h>

void main(){
	
	
	int a,b,c,d;
	
	 printf("Enter value of A :");
	scanf("%d",&a);
    printf("Enter value of b :");
	scanf("%d",&b);
	printf("Enter value of c :");
	scanf("%d",&c);
	printf("Enter value of d :");
	scanf("%d",&d);
	
	a>b ?b>c ?a>d ?printf("a is max"):printf("d is max"):c>d ?printf(" c is max"):printf("d is max"):b>c ?c>d ?printf("c is max"):printf("d is max"):b>d ?printf("b is max"):printf(" d is max");
	
}