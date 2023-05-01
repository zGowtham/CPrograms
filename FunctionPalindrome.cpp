#include <stdio.h>
void number(int num);
int temp,num,sum,rem;

int main()
{
	int a,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	number(num);
}

void number(int num)
{
	temp=num;
	while(num>0)
	{
     rem=num%10;
     sum=(sum*10)+rem;
     num=num/10;
	}
	 if(sum==temp)
	 {
	 printf("%d is a palindrome\n",temp);
	 }
	 
	 else
	 {
	 printf("%d is not a palindrome",temp);
	 } 
}
