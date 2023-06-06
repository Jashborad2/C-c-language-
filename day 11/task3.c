#include <stdio.h>
void main()
{
  int a,b,c,d;
  printf("\n enter value of a :\n");
  scanf("%d",&a);
  printf("\n enter value of b :\n");
  scanf("%d",&b);
  printf("\n enter value of c :\n");
  scanf("%d",&c);
  printf("\n enter value of d :\n");
  scanf("%d",&d);
  
  if(a>b){
  	if(a>c){
  		if(a>d){
  			printf("%d is max",a);
		  }
		  else
		  {
		  	printf(" %d is max",d);
		
		  }
  		
	  }
	  else{
          if(c>d){
          	printf("%d is max",c);
          	
		  }	
		  else{
            printf(" %d is max",d);
					  	
		  }  	
	  }
  	
  }	
  else{
  	if(b>c)
  	{
  		if(c>d){
  			printf("%d is max",c);
  			
		  }
		  else{
		  	printf(" %d is max",d);
		  }
	  }
  	else
  	{
  		if(b>d){
  			printf("%d is max",b);
  			
		  }
		  else{
		  	printf("%d is max",d);
		  	
		  	
		  }
	  }
  }
}