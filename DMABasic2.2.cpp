#include <stdio.h>
#include <stdlib.h>

int main() 

{
  int n;
  printf("Size of the array: ");
  scanf("%d", &n);
  
  int *arr = (int*)calloc(n, sizeof(int));
  
  if (arr == NULL) 
  {
    printf("Unable to allocate memory\n");
    return -1;
  }
  
  printf("Enter the elements: ");
  
  for (int i = 0; i < n; i++)
  scanf("%d", arr+i); 

  printf("Given array: ");
  for (int i = 0; i < n; i++)
  {
  printf("%d\n", *(arr+i)); 
  printf("%d\n",(arr+i));
  }
  
  printf("\n");

  printf("Removing first element i.e., arr[0] = %d.\n", arr[0]);
  for (int i = 1; i < n; i++)
  arr[i - 1] = arr[i];
  arr=(int*)realloc(arr,(n - 1)*sizeof(int));

  printf("Modified Array: ");
  for (int i = 0; i < n - 1; i++)
  printf("%d ", arr[i]);
  printf("\n");

  free(arr);
  return 0;
}
