#include<stdio.h>
//int c;
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	printf("Welcome\n");
	int a=5,b=10,c;
	c=add(a,b);
	printf("%d",c);
}
