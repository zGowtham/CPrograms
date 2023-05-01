#include<stdio.h>

int main()
{
	char array[6];
	char *p;
	int i;
	
	printf("Enter the elements of the array\n");
	for(i=0;i<6;i++)
	{
		scanf("%c",&array[i]);
	}
	
	p=&array[0];
	
	for(i=0;i<6;i++)
	{
		printf("value of array[%d] is %c",i,*p);
		printf("\nadddress of array[%d] is %d\n\n",i,p);
		p++;
	}
	
}