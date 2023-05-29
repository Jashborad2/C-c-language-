#include <stdio.h>
void main()
{
	int x,y,ans;
	printf("Enter your first value :",x);
	scanf("%d",&x);
	printf("enter your second value :",y);
	scanf("%d",&y);
	
	ans =   (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	printf("%d",ans);
	
}