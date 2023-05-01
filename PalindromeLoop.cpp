#include<stdio.h>
int main()
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