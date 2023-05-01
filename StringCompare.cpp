#include<stdio.h>

int main()
{
	char str1[50],str2[50],str3[50],str4[50];
	printf("Enter the String 1:\n");
	gets(str1);
	printf("Enter the String 2: \n");
	gets(str2);
	
	int i,j=0,count=0,count1=0,count2=0;
	
	for(i=0;str1[i]!='\0';i++)
	{
	str3[i]=str1[i];
	count1++;
	}
	
	for(i=0;str2[i]!='\0';i++)
	{
	str4[i]=str2[i];
	count2++;
	}
	
	/*
	for(i=0;str1[i]!='\0';i++)
	{
	printf("%c",str3[i]);
	}
	printf("\n");
	
	for(i=0;str2[i]!='\0';i++)
	{
	printf("%c",str4[i]);
	}
	printf("\n");

    printf("%d%d\n",count1,count2);
    */
    
	if(count1==count2)
	{
	for(i=0;i<count1;i++)
	{
		for(j=0;j<count1;j++)
		{
		printf("%c\t%c\n",str3[i],str4[j]);

		if(str3[i]==str4[j])
		{
			printf("\t\t%c\t%c\n",str3[i],str4[j]);
			count++;
			break;
		}
	    }
	}
    printf("\n%d\n%d",count1,count);
	if(count==count1)
	printf("\nThe two strings are equal");
	else
	printf("\nThe two strings are not equal");
    }
	else
	printf("\nThe two strings are not equal");
    
	
}