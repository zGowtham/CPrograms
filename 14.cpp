#include<stdio.h>
#include<string.h>

int main()
{

char a[100];
char b[100];

char *ptr1=&a[100];
char *ptr2=&b[100];

printf("\n%s",*ptr1);
printf("\n%s",*ptr2);

strcpy(a,"copied");
strcpy(b,"test");

printf("\n%s",*ptr1);
printf("\n%s",*ptr2);

printf("\n%s",a);
printf("\n%s",b);

}
