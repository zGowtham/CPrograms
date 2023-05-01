#include <stdio.h>
int main()
{
 int n;
 printf("Enter the length of the array:\t");
 scanf("%d",&n);
 int arr[n];
 
 int i;

 printf("Enter the elements of the array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 printf("The array looks like this:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }
 
 printf("\nEnter the position you would like to delete:\n");
 int pos;
 scanf("%d",&pos);
 
    for(i=pos-1;i<n-1;i++)
    {
	  arr[i] = arr[i+1];
    }
    
	printf("Array after deletion is:\n");
    
	for(i=0;i<n-1;i++)
    {
	 printf("%d\t",arr[i]);
    }
    
return 0;
}