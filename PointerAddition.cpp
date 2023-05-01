#include<stdio.h>

int main()
{
	int a,b,*ptr1,*ptr2,c;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	c=*ptr1+*ptr2;
	printf("\nThe sum is %d",c);
}