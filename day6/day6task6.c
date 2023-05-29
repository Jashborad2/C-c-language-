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
	
	ans =  (x*x*x) - (y*y*y) - (z*z*z) - ((3*(x+y))+(3*(y+z)+(3*(z+x))));
	
	printf("%d",ans);
	
}