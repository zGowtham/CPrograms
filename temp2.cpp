#include<stdio.h>

float f(float aa,float bb);
int main()
{
	int a;
	a=f(10,3.14);
	printf("%f",a);
}

float f(float aa,float bb)
{
	printf("Welcome to the sub function");
	return ((aa+bb));
}