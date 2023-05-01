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
 
 printf("The array looks like this:\n\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }
  
 int value;
 printf("\nEnter the value you want to search: ");
 scanf("%d",&value);
 
 for(i=0;i<n;i++)
 { 
  if(arr[i]==value)
  break;
 }

 printf("The value is %d element in the array",i);
 
}