#include<stdio.h>

int main()
{
	int a=10,b=20,c=30,d=40;
	int *p,**q,***r,****s;
	
	p=&a;
	q=&p;
	r=&q;
	s=&r;
	
	printf("%d%d%d%d",*p,**q,***r,****s);
}