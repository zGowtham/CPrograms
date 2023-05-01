#include<stdio.h>

int main()
{
	int array[5],i;
	int *arr[5];
	
	printf("Enter the elements of the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
		arr[i]=&array[i];

	}
	
	for(i=0;i<5;i++)
	{
		printf("%d",*arr[i]);
	}
	
	printf("\n%d",*arr[2]);
}