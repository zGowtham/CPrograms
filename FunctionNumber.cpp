#include <stdio.h>
int number(int num[]);

int main()
{
	int a,num[5],i;
	printf("Enter the numbers: ");
	for(i=0;i<5;i++)
	{
	scanf("%d",&num[i]);
    }
	number(num);
}

int number(int num[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",num[i]);
	}
	return 0;
}
