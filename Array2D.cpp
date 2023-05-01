#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2];
	int arr3[2][2];
	
	int i,j;
	printf("Enter the values of the A matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter the values of the B matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("The values of the A matrix are: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("The values of the B matrix are: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	printf("The value of the addition matrix is: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	
	printf("The value of the subtraction matrix is: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	
	printf("The value of the multiplication matrix is: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]*arr2[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
}