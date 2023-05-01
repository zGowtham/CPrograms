#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	printf("The entered values are a=%d and b=%d",a,b);
	
	c=a+b;
	b=c-b;
	a=c-a;
	printf("\nThe swapped values are a=%d and b=%d",a,b);

}