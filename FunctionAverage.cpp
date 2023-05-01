#include <stdio.h>

int number(int num[]);
int n;
int avg;

int main()
{
	int num[10],i;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	printf("Enter the numbers: ");
	for(i=0;i<n;i++)
	{
	scanf("\t%d",&num[i]);
    }
	avg=number(num);
	printf("\nThe average of the numbers is: %d",avg);
}

int number(int num[])
{
	int i,sum=0,avg;
	for(i=0;i<n;i++)
	{
	sum=sum+num[i];
	printf("\n%d",sum);	
	}
	avg=sum/n;
	return avg;
	
}
