#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n=4;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}