#include<stdio.h>

int main()
{
	char str1[50],str3[50];
	int i,j,rem=0,count1=0,count2=0;
	printf("Enter the String:\n");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
	str3[i]=str1[i];
	//printf("%c",str3[i]);
	count1++;
	}
	rem=(count1/2);
	//printf("%d\n",rem);
			
if((count1%2)>0)
{

	for(i=0;i<rem;i++)
	{
		for(j=count1-1;j>rem;j--)
		{
			printf("%c\t",str1[i]);
			printf("%c\n",str3[j]);
			if(str3[j]==str3[i])
			{
			count2++;
			break;
		    }
		}
	}
}

if((count1%2)==0)
{

	for(i=0;i<rem;i++)
	{
		for(j=count1-1;j>=rem;j--)
		{
			printf("%c\t",str1[i]);
			printf("%c\n",str3[j]);
			if(str3[j]==str3[i])
			{
			count2++;
			break;
		    }
		}
	}
}
	
	//printf("\n%d",count2);
	//printf("\n%d",rem);

	if(count2==rem)
	printf("\nThe given string is a palindrome");
	else
	printf("\nThe given string is not a palindrome");
}