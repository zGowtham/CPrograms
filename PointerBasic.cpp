#include<stdio.h>

int main()
{
	int a=5;
	int *ptr;
	ptr=&a;
	
	char c='v';
	char *ptr1;
	ptr1=&c;
	
	float f=5.00400;
	float *ptr2;
	ptr2=&f;
	
	printf("The address of the variable is %d\n",ptr);
	printf("The value stored in the variable is %d\n",*ptr);
	
	printf("The address of the variable is %d\n",ptr1);
	printf("The value stored in the variable is %c\n",*ptr1);
	
	printf("The address of the variable is %d\n",ptr2);
	printf("The value stored in the variable is %f",*ptr2);

}