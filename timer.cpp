#include<stdio.h>

int a=1000000;
	int b,i;
	float result;
	
int main()
{
	
	for(i=0;i<256;i++)
	{
		b=64*(256-i);
		result=(float)a/b;
		printf("\ni=%d\t result=%f",i,result);
	}
}