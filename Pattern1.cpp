#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			if(i==1||j==1||i==5||j==5)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}