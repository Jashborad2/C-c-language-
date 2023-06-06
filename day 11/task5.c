#include <stdio.h>

 void main()
 {
 	int a ;
 	float b,c,d;
 	printf(" Enter units consumed :");
 	scanf("%d",&a);
 	if(a<=50){
 		b =a*0.50;
	 }
	 else if(a<=150){
	 	 b =  25 +((a-50)*0.75);
	 }
	 else if(a<=250){
	 	b = 100 + ((a-150)*1.20);
	 	
	 }
	 else{
	 	b = 220 +((a-250)*1.50);
	 }
	 
	 d = b*0.20;
	 c = b + d;
	 
	 printf(" Electricity Bill = Rs %f",c);
	 
	 
 }