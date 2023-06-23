#include<stdio.h>
#include<string.h>

void main(){
	
	char a[]={"jashborad13@gmail.com"};
	char b[]={"0987654321"};
	
	char c[100];
	char d[100];
	
	printf("Enter your Email :");
	gets(c);
	
	printf("Enter your password :");
	gets(d);
	
	if(strcmp(a,c)==0){
		
		if(strcmp(b,d)==0){
			printf("login succesfully.....");
		}else{
			printf("please check your password properly!!");

		}
		
	}else{
		printf("please check your Email properly!!");
		
	}

}