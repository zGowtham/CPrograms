#include<stdio.h>

int sum(int a,int b);
int factorial(int c);
int swap(int add,int mul);

int add;
int swaptemp;
int fact;

int main()
{
	int a,b;
	printf("Enter the two values: \n");
	scanf("%d%d",&a,&b);
	add=sum(a,b);
	return 0;
}

int sum(int a,int b)
{
	int c,fact;
	add=a+b;
	printf("The sum of two numbers is: %d\n",add);
    fact=factorial(add);
	return c;
}

int factorial(int add)
{
	printf("Welcome to factorial: \n");
	int i;
	int mul=1;
	for(i=add;i>0;i--)
	{
	 mul=mul*i;
	}
	printf("The factorial of the number is %d\n",mul);
	swaptemp=swap(add,mul);
	return mul;
}

int swap(int add,int mul)
{
	int z;
	z=add;
	add=mul;
	mul=z;
	printf("The sum and the factorial are %d and %d",add,mul);
	return swaptemp;
}


























//int factorial(int add)
//{
	



