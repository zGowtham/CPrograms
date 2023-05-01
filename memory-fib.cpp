#include<stdio.h>

int main()
{
	
	int a=0,b=1,c,i;
	
	for(i=0;i<20;i++)
	{
	
	c=a+b;
	printf("\n%d",c);
	a=b;
	b=c;
	}
	
}