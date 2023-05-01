#include <stdio.h>

int main()
{
	int i;
	char array[5];
	char *ptr;
	ptr=array;
	printf("Enter the members of the array\n");
	for(i=0;i<5;i++)
	{
	scanf("%c",&array[i]);	    
	}
	for(i=0;i<5;i++)
	{
	printf("%c\n",*(ptr+i));
	printf()
	}
}