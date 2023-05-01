#include<stdio.h>

int prime();
int armstrong();
int palindrome();

int main()
{
	int choice;
	printf("Welcome. Choose your option\n1.Prime2.Armstrong3.Palindrome");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: prime();
		break;
		case 2: armstrong();
		break;
		case 3: palindrome();
		break;
	}
}
	int prime()
	{
	int num1,num2,i,j,temp=0;
	printf("Enter the range\n");
	scanf("%d%d",&num1,&num2);
	
	for(i=num1;i<=num2;i++)
	{
		for(j=2;j<i;j++)
		{ 
			if(i%j==0)
			break;  
		}		
	if(i==j)
	printf("%d is a prime number\n",i);
	}
	return 0;
		
	}
	
	int armstrong()
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
	return 0;
	}
	
	int palindrome()
	{
	int num1,num2,sum,rem,temp,i;
	printf("Enter the range\n");
	scanf("%d%d",&num1,&num2);
	for(i=num1;i<=num2;i++)
	{
	 temp=i;  
	 sum=0;
     while(temp>0)
     {
     	rem=temp%10;
     	sum=(sum*10)+rem;
     	temp=temp/10;
	 }
	 if(sum==i)
	 printf("%d is a palindrome\n",i);
    }
	
	}
	
	
