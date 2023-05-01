#include <stdio.h>
#include <stdlib.h>

typedef struct vector 
{
  int size;
  int arr[];
} vector;

int main() 
{

  int n;
  printf("Size of the array: ");
  scanf("%d", &n);
 
  vector *ptr=(vector*)malloc(sizeof(vector*)+n*sizeof(int));

  printf("Enter the elements: ");
  for (int i = 0; i < n; i++)
  {
  scanf("%d",ptr->arr+i);
  printf("\n%d",ptr->arr+i);
  }

  printf("Given array: ");
  for (int i = 0; i<n; i++)
  {
  printf("\n%d",ptr[i]);
  }
  printf("\n");

  free(ptr);
  return 0;
}
