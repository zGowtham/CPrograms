#include<stdio.h>

int main()
{

int var = 10;    
int *ptr1 = &var; 
int **ptr2 = &ptr1;

printf("value of var is %d\n",var);
printf("Address of var stored in ptr1 is %d\n",ptr1);
printf("Address of ptr1 stored in ptr2 is %d\n",ptr2);

printf("%d\n",*ptr1);
printf("%d",*ptr2);
}
