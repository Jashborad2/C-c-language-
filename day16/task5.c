#include<stdio.h>

void main(){
	
	int r,c,k;
	
	for(r=1;r<=5;r++){
		for(k=r;k<5;k++){
			printf(" ");
		}
		for(c=r;c>=1;c--){
			printf("%d",r);
		}
		printf("\n");
	}
	
}