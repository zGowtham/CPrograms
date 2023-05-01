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
	
	int choice;
	printf("Select the portion you want to see: \n1.Lower\n2.Upper\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	case 1:
	printf("The portion you selected to see: \n");

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==j||(i-j)>0)
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
			
	break;

    case 2:
    printf("The portion you selected to see: \n");

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==j||(i-j)<0)
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	break;
	
    }
	
}