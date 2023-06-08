#include<stdio.h>

void main()

{
	
int n,i=1,b=1;
printf("enter value :");
scanf("%d",&n);

while(i<=n){
	
     b = b*i;
     i++;	

}
printf("factorial of %d is :%d",n,b);
}