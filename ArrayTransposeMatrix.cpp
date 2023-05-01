#include<stdio.h>
int main()
{
	printf("Enter the number of rows and columns of the matrix: \n");
	int r,c;
	scanf("%d%d",&r,&c);
	 
	int i,j;
	int arr[r][c];
	int arrt[c][r];
	
	printf("Enter the values of the Matrix: \n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("The elements of the matrix are: \n");

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	
    for(i=1;i<=c;i++)
	{
		for(j=1;j<=r;j++)
		{
			arrt[i][j]=arr[j][i];
		}
		printf("\n");
	}

	printf("The elements of the transposed matrix are: \n");

	for(i=1;i<=c;i++)
	{
		for(j=1;j<=r;j++)
		{
			printf("%d\t",arrt[i][j]);
		}
		printf("\n");
	}
	
}