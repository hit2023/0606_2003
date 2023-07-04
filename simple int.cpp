#include<stdio.h>
main()
{
	float p,r,n,SI;
	printf("enter the principal amount:");
	scanf("%f",&p);
	printf("enter the rate:");
	scanf("%f",&r);
	printf("enter time:");
	scanf("%f",&n);
	SI=(p*r*n/100);
	printf("The simple intertest is%f",SI);
}
