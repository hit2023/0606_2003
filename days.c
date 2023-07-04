//WAP to convert year into day and day into year...

#include<stdio.h>
main()
{
	float days;
	float year;
	
	printf("the enter a days :");
	scanf("%f",&days);
	
	year = days / 365;
	days = year * 365;
	
	printf("the year is %f\n",year);
	printf("the days is %f",days);
	
	
}
