#include<stdio.h>

int add(int *a);

int main()
{
	int a=50;
	int *ptr;
	
	ptr=&a;
	
	printf("\nThe memory location of a is %d",&a);//2000
	printf("\nBefore Function call a=%d",a);//50
	add(&a);
	printf("\n\nAfter Function call a=%d",a);//150
	printf("\nThe memory location of a is %d",&a);//2000
	printf("\nThe memory location of pointer is %d",&ptr);//2004
}

int add(int *a)
{
//	printf("\n\nThe value of a is: %d",a);
	printf("\nbefore adding value: a=%d",*a);// 50
	*a=*a+100;
	printf("\nafter adding value: a=%d",*a);//150
	return 0;
}