#include<stdio.h>

void main(){
	
	int r,c;
	
		for(r=1;r<=5;r++){
		for(c=r;c>=1;c--){
			printf("%d",c);
		}
		printf("\n");
	}
	for(r=4;r>=1;r--){
		for(c=r;c>=1;c--){
			printf("%d",c);
		}
		printf("\n");
	}
}