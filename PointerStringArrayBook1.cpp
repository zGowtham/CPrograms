#include <stdio.h>

int main()
{
 char name[] = "Hello World";
 printf("%c",*name); // Output: H
 printf("%c", *(name+1)); // Output: e
 printf("%c", *(name+7)); // Output: o
 
 char *namePtr;
 namePtr = name;
 printf("%c",*namePtr); // Output: H
 printf("%c", *(namePtr+1)); // Output: e
 printf("%c", *(namePtr+7)); // Output: o
}
