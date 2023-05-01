#include<stdio.h>
int main()
{
	char str[20];
	int i,count=0;
	printf("Enter the string:\n");
    gets(str);
    puts("The number you entered is:");
	for(i=0;str[i]!='\0';i++)
	{
		count++;
		printf("%c",str[i]);
	}
	
	
	printf("\n%c",str[count-1]);
		
    if(str[count-1]=='0'||str[count-1]=='2'||str[count-1]=='4'||str[count-1]=='6'||str[count-1]=='8')
	printf("\nThe given string is an even number");
	else
	printf("\nThe given string is an odd number");	
		
}