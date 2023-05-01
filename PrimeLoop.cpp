#include<stdio.h>
int main()
{
	int num1,num2,i,j,temp;
	printf("Enter the range\n");
	scanf("%d%d",&num1,&num2);
	
	for(i=num1;i<=num2;i++)
	{
		temp=0;
		for(j=2;j<i;j++)
		{ 
			if(i%j==0)
			{
			temp=1;
			break;
		    }
//		break;   
		}	
			
	    if(temp==0)
	    printf("%d is a prime number\n",i);
	}
	return 0;
}