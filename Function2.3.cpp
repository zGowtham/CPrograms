#include <stdio.h>
int number(int num[]);

int main()
{
	int a,num[5],i;
	number(num);
	for(i=0;i<5;i++)
	{
		printf("%d",num[i]);
	}
}

int number(int num[])
{
	int i;
	printf("Enter the numbers: ");
	for(i=0;i<5;i++)
	{
	scanf("%d",&num[i]);
    }
	return num[i];
}
