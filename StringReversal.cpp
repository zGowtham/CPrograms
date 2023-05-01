#include<stdio.h>
int main()
{
	char str[20];
	int i,count=0;
	printf("Enter the name you want to be printed:\n");
    gets(str);
    
    printf("The name you have entered and its reversal is:");
	for(i=0;str[i]!='\0';i++)
	{
		count++;
		printf("%c",str[i]);
	}
	
	printf("\t");
	for(i=count;i>=0;i--)
	{
		printf("%c",str[i]);
	}
//	printf("\n%c",str[0]);
	
}