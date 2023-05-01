#include<stdio.h>
int main()
{
	char str[20];
	int i;
	printf("Enter the name you want to be printed:\n");
    gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	
}