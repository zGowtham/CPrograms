#include<stdio.h>
int main()
{
	int arr[10];
	int i,counto=0,counte=0;
	printf("Enter the elements of the array\n");
    for(i=0;i<10;i++)
    {
     	scanf("%d",&arr[i]);
	}		
	for(i=0;i<10;i++)
	{
		if((arr[i]%2)==0)
		{
		printf("%d is an even number\n",arr[i]);
		counte++;
	    }
		else
		{
		printf("%d is an odd number\n",arr[i]);
		counto++;
	    }
	}
	printf("The number of odd and even numbers are \n%d\n%d",counto,counte);
}