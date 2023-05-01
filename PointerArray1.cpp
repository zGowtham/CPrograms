#include<stdio.h>

int main()
{
	int array[5],i;
	int *p;
	
	printf("Enter the elements of the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	
	p=&array[0];
	
	for(i=0;i<5;i++)
	{
		printf("\nvalue of array[%d] is %d",i,*p);
		printf("\nadddress of array[%d] is %d\n\n",i,p);

		p++;
	}
	
	//p=&array[0];

	/*for(i=0;i<5;i++)
	{
		printf("\n%d",*p);
		p++;
	}
	*/	
}