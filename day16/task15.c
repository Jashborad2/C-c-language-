#include<stdio.h>

void main(){
	
	char r,c,k;
	
	for(r='E';r>='A';r--){
		for(k='E';k>r;k--){
			printf(" ");
		}
		for(c='A';c<=r;c++){
			printf("%c",c);
		}
		printf("\n");
	}
}