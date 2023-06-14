#include<stdio.h>

void main(){
	
	char r,c,k;
	
	for(r='A';r<='E';r++){
		for(k=r;k>'A';k--){
			printf(" ");
		}
		for(c=r;c<='E';c++){
			printf("%c",c);
		}
		printf("\n");
	}
}