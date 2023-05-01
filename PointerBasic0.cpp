#include<stdio.h>

void integer();
void character();

int main()
{
	//integer();
	character();
}

void integer()
{
	int a=10;
	int b=100;
	printf("b=%d",b);
    b=250;
	printf("\nb=%d",b);
	int *ptr;
	ptr=&a;
	*ptr=25;
	printf("\n%d",a);
}

void character()
{
	int i;
	char array[6];
	char *ptr;
	ptr=array;
	for(i=0;i<5;i++)
	{
		scanf("%c",&array[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%c\n",*(ptr+i));
	}
		
}