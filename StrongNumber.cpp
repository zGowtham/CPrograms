#include<stdio.h>
#include<conio.h>

int main()
{
	int num,mod,sum=0,fact=1,temp;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
	 mod=num%10;
	 fact=1;
	 while(mod>=1)
	 {
		fact=fact*mod;
	 	mod--;
	 }	
	 sum=sum+fact;
	 num=num/10;
	}
	
	if(sum==temp)
	printf("The number is a strong number");
	else
	printf("The number is not a stong number");
	return 0;
}