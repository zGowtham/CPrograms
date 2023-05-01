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
 
 int nv, pos;
 
 printf("Enter the value and position:\n");
 scanf("%d%d",&nv,&pos);
 
 arr[pos-1]=nv;
 
 printf("Now, The array looks like this:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }
 
}