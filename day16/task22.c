#include <stdio.h>

void main(){
	
	int r,c,k;
	
	for(r=1;r<=5;r++)
	{
		for(k=2;k<=r;k++){
			printf(" ");
		}
		for(c=5;c>=r;c--){
		  if(c%2==0){
		  	printf("|");
		  }else{
		  	printf("-");
		  }
		}
		printf("\n");
	}
}