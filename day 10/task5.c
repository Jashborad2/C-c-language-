#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("enter your phone number for calling :\n");
	scanf("%d",&a);
	printf("calling.....");
	printf(".......\n");
	printf("connected\n");	 		
	printf("\n press 1 for english\n");
	printf("\n press 2 for hindi\n");
	printf("\n press 3 for gujarati\n");
	printf("\n enter choice :\n");
	scanf("%d",&b);


   switch(b)
   {
   	
   	    case 1 :
   	 	printf(" you select english langauge");
   	 	break;
   	 	case 2 :
   	 	printf(" you select hindi langauge");
   	 	break;
   	 	case 3 :
   	 	printf(" you select Gujarati langauge");
   	 	break;
   	 	
   	 	default :
   	 	printf(" invalid !!");
   	 	break;
   	 	
   	
   	
   }

	 
	printf("\n press 5 for activate international calling\n");
	printf("\n press 6 to activate exclusive offer for free messaging \n");
	printf("\n press 7 to activate caller tune \n");
	printf("\n enter your choice :\n");
	scanf("%d",&d);
	
	switch(d)
	{
		case 5:
			printf(" your international calling is activated");
			break;
	    case 6:
			printf("free messaging is activated");
		    break;
		case 7:
			printf("your caller tune is activated ");
			break;
	    default :
   	 	    printf(" invalid !!");
   	 	    break;
			
	}
	printf("\n press 8 for check balance\n");
    printf("\n press 9 for check balance and cut the call\n");
	printf("\n enter choice :\n");
	scanf("%d",&c);  	
	 switch(c){
	 	
	case 8:
		
		printf("your account  currnt balance is sent to your mobile no");
		break;
		
		case 9:
			printf("your account  currnt balance is sent to your mobile no\n");
			printf(" ##### thanks for responding #####");
		    exit(0);
		
        default :
   	 	    printf(" invalid !!");
   	 	    break;
   	 	
		
	 }
	printf("\n thank you for responding \n");
	printf("\n Have Nice day !!");
	

}