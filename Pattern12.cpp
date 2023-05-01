#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,s,n=4;
	for(i=1;i<5;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("*"); 
		}
		
		for(s=1;s<=(n-i);s++)
		{
			printf(" ");
	    }

		for(s=1;s<=(n-i);s++)
		{
			printf(" ");
	    }

		for(j=1;j<=i;j++)
		{
			printf("*"); 
		}
        
        printf("\n");
	}
	
	return 0;
}