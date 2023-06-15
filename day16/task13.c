#include<stdio.h>

void main(){
	
	char r,c,k;
	
	for(r='A';r<='E';r++){
		for(k='E';k>r;k--){
			printf(" ");
		}
		for(c=r;c>='A';c--){
			 printf("%c",c);
			 
			 
		}
		printf("\n");
	}
}