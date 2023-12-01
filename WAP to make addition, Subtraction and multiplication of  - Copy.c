//WAP to make addition, Subtraction and multiplication of 
//two matrix using 2-D array  1)ADDITION

#include<stdio.h>
main()
{
	int a[2][2], b[2][2],c[2][2];
	int i,j;
	printf("******ADDITION*********\n");
	printf("Enter array element: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Element:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("-------------Matrix-1-------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter array element: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Element:");
			scanf("%d",&b[i][j]);
		}
	}
	printf("-------------Matrix-2-------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n-------Result : addition of Matrix---------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
