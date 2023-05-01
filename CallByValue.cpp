#include<stdio.h>

int add(int a);

int main()
{
	int a=50;
	printf("\nThe memory location of a is %d",&a);
	printf("\nBefore Function call a=%d",a);
	add(a);
	printf("\nAfter Function call a=%d",a);
	printf("\nThe memory location of a is %d",&a);
}

int add(int a)
{
	printf("\n\nThe value of a is: %d",a);
	printf("\nbefore adding value: a=%d",a);
	a=a+100;
	printf("\nafter adding value: a=%d",a);
	return 0;
}