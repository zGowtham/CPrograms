#include<stdio.h>
int main()
{
	int num1,num2,sum,mod,temp,i,mul;
	printf("Enter the range:\n");
	scanf("%d%d",&num1,num2);
	for(i=num1;i<=num2;i++)
	{
		sum=0;
		mod=0;
		temp=i;
		while(temp>0)
		{
			mul=0;
			mod=temp%10;
			mul=mod*mod*mod;
			sum=sum+mul;
			temp=temp/10;
		}
		if(sum==i)
		printf("%d is Armstrong number\n",i);
	}
	
}