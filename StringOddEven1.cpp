#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,count=0;
	printf("Enter the string:\n");
    gets(str);
    strrev(str);
    //puts("The number you entered is:");
	/*for(i=0;str[i]!='\0';i++)
	{
		count++;
		printf("%c",str[i]);
	}*/
	
	puts("\n");
	
	/*for(i=count-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	
	puts("\n");*/	
	printf("%c",str[0]);
	
    if(str[0]=='0'||str[0]=='2'||str[0]=='4'||str[0]=='6'||str[0]=='8')
	printf("\nThe given string is an even number");
	else
	printf("\nThe given string is an odd number");	
		
}