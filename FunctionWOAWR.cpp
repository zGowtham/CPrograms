#include<stdio.h>
int c;
int add()
{
	int a=10,b=15;
	c=a+b;
	return c;
}

int main()
{
	printf("Welcome\n");
	c=add();
	printf("%d",c);
}
