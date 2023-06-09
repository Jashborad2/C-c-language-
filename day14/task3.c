#include<stdio.h>

void main(){
	
	int count=0,i;

printf(" Enter value :");
scanf("%d",&i);

  while(i!=0){
  	i=i/10;
  	count++;
  }
  printf("%d",count);
}