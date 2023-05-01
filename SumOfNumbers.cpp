#include<stdio.h>
#include<conio.h>

int main()
{
 int num,mod,sum=0;
 printf("Enter the number\n");
 scanf(" %d",&num);
 while(num>0)
 {
 	mod=num%10;
 	sum=sum+mod;
 	num=num/10;
 }	
 printf("The sum of the number is %d\n",sum);
 return 0; 
}