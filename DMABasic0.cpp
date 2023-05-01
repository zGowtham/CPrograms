#include<stdio.h>
#include<stdlib.h>

int *ptr;
int a=25,b=50,c=75;

void x()
{
	
	ptr=&a;
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	
	ptr=&b;
	printf("%d\n",ptr);
	printf("%d\n",*ptr);

	ptr=&c;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
	    
    printf("%d\n",ptr+1);
    printf("%d\n",*(ptr+1));

    printf("%d\n",ptr+2);
    printf("%d\n",*(ptr+2));	

}

void y()
{
printf("%d",ptr);
printf("\n%d",*ptr);
}


int main()
{
  x();
  y();
}

