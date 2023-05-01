#include<stdio.h>
int main()
{
	char str[20];
	int i;
	int count=0;
	printf("Enter the name you want to be printed:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("The length of the string is %d",count);
}