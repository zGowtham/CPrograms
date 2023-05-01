#include<stdio.h>

/*
int main()
{
	int a=10,*ptr1,**ptr2;
	ptr1=&a;
	printf("The value stored in ptr 1 is %d",*ptr1);
	ptr2=&ptr1;
	printf("\nThe value stored in ptr 2 is %d",**ptr2);

}
*/
	
int main()
{
	int a=10,*ptr1,*ptr2;
	ptr1=&a;
	ptr2=ptr1;
	printf("The value stored in ptr 1 is %d",*ptr1);
	printf("\nThe value stored in ptr 2 is %d",*ptr2);
}