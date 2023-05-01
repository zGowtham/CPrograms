#include <stdio.h>
int main()
{
 int m = 5, n = 10, o = 0;
 int *p1,*p2,*p3;
 p1 = &m;//printing the address
 p2 = &n;//printing the address 
 printf("p1 = %d\n", p1);
 printf("p2 = %d\n", p2);
  
o=*p1+*p2;
 printf("*p1+*p2 = %d\n", o);
 
//p3=p1-p2;
// printf("p1 - p2 = %d\n", p3);

 p1++;
 printf("p1++ = %d\n", p1); 
 p2--;
 printf("p2-- = %d\n", p2); 
 return 0;
}
