#include<stdio.h>

void main()
{
	int bs,hra,da,ta,gs;
	printf("Enter your salary :");
	scanf("%d",&bs);
	
	hra =(10*bs)/100;
	da =(5*bs)/100;
	ta =(8*bs)/100;
	
	gs  = hra + da + ta + bs;
	printf("your gross salary is : %d",gs);
}