#include<stdio.h>

int main()
{
	char str[20];
	int i,lc,uc;
	printf("Enter the name you want to be printed:\n");
    gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>64&&str[i]<91)
		{
			lc=str[i]+32;
			printf("%c",lc);
		}
		if(str[i]>96&&str[i]<123)
		{
			uc=str[i]-32;
			printf("%c",uc);
		}
	}
	
}