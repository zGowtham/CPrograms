#include<stdio.h>

int sum(int a,int b),subtract(int a,int b),multiply(int a, int b),divide(int a, int b);

int main()
{
	printf("Welcome\n");
	int a=10,b=5,c;
	c=sum(a,b);
	printf("\n%d",c);
	c=subtract(a,b);
	printf("\n%d",c);	
	multiply(a,b);
	divide(a,b);
}

int sum(int a,int b)
{
	int c;
	printf("Addition\n");
	c=a+b;
	return c;
//	printf("%d\n",c);
}

int subtract(int a, int b)
{
	int c;
	printf("Subtraction\n");
	c=a-b;
	return c;
//	printf("%d\n",c);	
}

int multiply(int a,int b)
{
	int c;
	printf("Multiplication\n");
	c=a*b;
	printf("%d\n",c);	
}

int divide(int a,int b)
{
	int c;
	printf("Division\n");
	c=a/b;
	printf("%d\n",c);	
}


