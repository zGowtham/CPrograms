#include<stdio.h>

int sum(),subtract(),multiply(),divide();
int main()
{
	printf("Welcome\n");
	sum();
	subtract();
	multiply();
	divide();
}

int sum()
{
	int a,b,c;
	printf("Addition\n");
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	printf("%d\n",c);
}

int subtract()
{
	int a,b,c;
	printf("Subtraction\n");
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("%d\n",c);	
}

int multiply()
{
	int a,b,c;
	printf("Multiplication\n");
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("%d\n",c);	
}

int divide()
{
	int a,b,c;
	printf("Division\n");
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	c=a/b;
	printf("%d\n",c);	
}


