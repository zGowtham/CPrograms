#include<stdio.h>

int main()
{
	char str1[20],str2[20],str3[20];
	puts("Enter the 1st string: \n");
	gets(str1);
	puts("Enter the 2nd string: \n");
	gets(str2);
	
	int i,j=0;
	for(i=0;str1[i]!='\0';i++)
	{
	str3[j]=str1[i];
	j++;	
	}
	
	for(i=0;str2[i]!='\0';i++)
	{
	str3[j]=str2[i];
	j++;	
	}
	
	puts(str3);
	
}