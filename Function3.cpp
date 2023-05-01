#include <stdio.h>
void number(int num);

int main()
{
	int a,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	number(num);
}

void number(int num)
{
	if(num%2==0)
	{
		printf("The number is an even number");
	}
	else
	{
	printf("The number is an odd number");
	}
}
