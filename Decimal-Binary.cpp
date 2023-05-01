#include<stdio.h>
#include<conio.h>

int main()
{
	int num,a=0,b=0,c=0,d=0,a1,b1,c1,d1;
	printf("Enter the decimal number\n");
	scanf("%d",&num);
	if(num/8>0)
	a=1;
	else
	a=0;
	a1=num%8;
	if(a1/4>0)
	b=1;
	else
	b=0;
	b1=a1%4;
	if(b1/2>0)
	c=1;
	else
	c=0;
	c1=b1%2;
	if(c1/1>0)
	d=1;
	else
	d=0;
	printf("%d%d%d%d",a,b,c,d);
	return 0;
}