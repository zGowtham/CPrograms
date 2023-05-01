#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=10;
	int b=20;
	int c=30;
	int *ptr1 = (int*)malloc(sizeof(a));
	int *ptr2 = (int*)malloc(sizeof(b));
	int *ptr3 = (int*)malloc(sizeof(c));
	
	char d='A';
	char e='B';
	char f='C';
	char *ptr4 = (char*)malloc(sizeof(char));
	char *ptr5 = (char*)malloc(sizeof(char));
	char *ptr6 = (char*)malloc(sizeof(char));
		
	printf("Allocated memory is %d\n",ptr1);
	printf("Allocated memory is %d\n",ptr2);
	printf("Allocated memory is %d\n",ptr3);
	
	printf("Allocated memory is %d\n",ptr4);
	printf("Allocated memory is %d\n",ptr5);
	printf("Allocated memory is %d\n",ptr6);
	    
	//int i=0;
	
	/*
	for(i=0;i<a;i++)
	{
		printf("%d\n",ptr->a+i);
	}
	*/
}