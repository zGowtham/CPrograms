#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,s,n=4;
	for(i=n;i>=1;i--)
	{
		for(s=1;s<=(n-i);s++)
		{
			printf(" ");
	    }
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*"); 
		}
		printf("\n");
	}
	return 0;
}