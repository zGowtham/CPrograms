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
 
 printf("\nEnter the position and the value you would like to insert into this array:\n");
 int pos;
 scanf("%d",&pos);
 int ele;
 scanf("%d",&ele);
 
 if(pos>n)
 printf("Exceeding the size of the array");
 else
 {
    for(i=n-1;i>=pos-1;i--)
    {
	  arr[i+1] = arr[i];
    }
    
    arr[pos-1]=ele;
    
	printf("Array after insertion is:\n");
    
	for(i=0;i<=n;i++)
    {
	 printf("%d\t", arr[i]);
    }
    
 }

return 0;
}