#include<stdio.h>

int main()
{
	int a,b,c,*ptr1,*ptr2,*ptr3;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	printf("The entered values are a=%d and b=%d",a,b);

	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	*ptr3=(*ptr1)+(*ptr2);
	*ptr2=(*ptr3)-(*ptr2);
	*ptr1=(*ptr3)-(*ptr1);
	
	printf("\nThe swapped values are a=%d and b=%d",*ptr1,*ptr2);

}