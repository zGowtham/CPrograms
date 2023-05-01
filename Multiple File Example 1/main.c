#include<stdio.h>

#include"header.h"

int main()
{
	printf("Welcome to X Std");
	printf("\nEnter the number for the information about the class");
	
	printf("\n1.English");
	printf("\n2.Physics");
	printf("\n3.Chemistry");
	printf("\n4.Maths\n");
	
	int a;
	scanf("%d",&a);
	
	if(a==1)
	{
		english();
	}

	if(a==2)
	{
		physics();
	}	
	
	if(a==3)
	{
		chemistry();
	}
	
	if(a==4)
	{
		maths();
	}
	

}