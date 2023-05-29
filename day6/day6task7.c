#include <stdio.h>
void main()
{
	int x,y,z,ans;
	printf("Enter your first value :",x);
	scanf("%d",&x);
	printf("enter your second value :",y);
	scanf("%d",&y);
	printf("enter your third value :",z);
	scanf("%d",&z);
	
	ans =  (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("%d",ans);
	
}