#include<stdio.h>

int main()
{
	int a,b,*ptr1,*ptr2,c;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	printf("The entered values are a=%d and b=%d",a,b);
	ptr1=&a;
	ptr2=&b;
	c=*ptr1;
	*ptr1=*ptr2;
	*ptr2=c;
	printf("\nThe swapped values are a=%d and b=%d",*ptr1,*ptr2);
}