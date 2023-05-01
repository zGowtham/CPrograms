#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=10;
	int b=20;
	int c=30;
	int *ptr1 = (int*)calloc(1,sizeof(a));
	int *ptr2 = (int*)calloc(2,sizeof(b));
	int *ptr3 = (int*)calloc(3,sizeof(c));
	
	char d='A';
	char e='B';
	char f='C';
	char *ptr4 = (char*)calloc(1,sizeof(char));
	char *ptr5 = (char*)calloc(2,sizeof(char));
	char *ptr6 = (char*)calloc(3,sizeof(char));
		
	printf("Allocated memory is %d\n",ptr1);
	printf("Allocated memory is %d\n",(ptr1+1));

	printf("Allocated memory is %d\n",ptr2);
	printf("Allocated memory is %d\n",(ptr2+1));
	printf("Allocated memory is %d\n",ptr3);
	printf("Allocated memory is %d\n",(ptr3+1));
	printf("Allocated memory is %d\n",(ptr3+2));
	
	//printf("Allocated memory is %d\n",ptr4);
//	printf("Allocated memory is %d\n",ptr5);
	//printf("Allocated memory is %d\n",ptr6);
	    
}