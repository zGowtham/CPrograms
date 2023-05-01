#include<stdio.h>
int main()
{
	int num1,num2,i,j,temp=0;
	printf("Enter the range\n");
	scanf("%d%d",&num1,&num2);
	
	for(i=num1;i<=num2;i++)
	{
		for(j=2;j<i;j++)
		{ 
			if(i%j==0)
			break;  
		}		
	if(i==j)
	printf("%d is a prime number\n",i);
	}
	return 0;
}