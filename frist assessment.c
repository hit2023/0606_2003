#include<stdio.h>
main()
{
	
	int a [2] [2];
	int b [2] [2];
	int c [2] [2];
	int row, col;
	printf("...... frist matrix ......\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("enter elements:");
			scanf("%d",&a[row][col]);
			
		}
		
		printf("\n");
	}
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",a[row][col]);
			
		}
		printf("\n");
	}
	printf("...... second matrix ......\n");
	for(row=0;row<2;row++)
		{
		for(col=0;col<2;col++)
		{
			printf("enter elements:");
			scanf("%d",&b[row][col]);
			
		}
		
		printf("\n");
	}
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",b[row][col]);
			
		}
		printf("\n");
	}
	printf("...... multiplication matrix ......\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)	
		{
			c [row][col]=a[row][col]*b[row][col];
			printf("%d ",c[row] [col]);
		}
			printf("\n"); 
	}
}
