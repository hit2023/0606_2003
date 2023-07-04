#include<stdio.h>
void sum()
{
	int a,b;
	printf("enter the value of a and b:\n");
	scanf("%d %d",&a,&b);
	a = a+b;
	b = a-b;
	printf("\n the value of b is :%d\n",b);
	a=a-b;
	printf("\n the value of a is :%d\n",a);
}
main()
{
	sum();
}
