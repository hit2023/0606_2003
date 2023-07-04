#include<stdio.h>
main()
{
	int a=100;
	int b=50;
	char c;
	printf("Enter the value of c :");
	scanf("%c",&c);
	
	switch(c)
	{
	case 1:
	printf("addition to a and b of %d",a+b);
	break;
	
	case 2:
	printf("subtratction to a and b of %d",a-b);
	break;
	
	case 3:
	printf("multipication to a and b of %d",a*b);
	break;
	
	case 4:
	printf("divisible to a and b of %d",a/b);
	break;
	
	default:
		{
			printf("invalied value");
		}
	
		
	}	
	
}
