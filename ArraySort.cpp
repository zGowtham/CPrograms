#include<stdio.h>
int main()
{
	int arr[5],i,j,temp;
	printf("Enter the 5 elements of the array:\n");
	
	for(i=0;i<5;i++)  
	{
	printf("Enter the element - %d\t",i+1);
	scanf("%d",&arr[i]); 
    }
    
    for(i=0;i<5;i++)
    {
    	for(j=i+1;j<5;j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}