#include<stdio.h>

int main()
{
	char str[24];
	int i;
	printf("\nA valid password must contain the following:\n\n1.Atleast 2 uppercase characters\n2.Atleast 5 lowercase characters\n3.Atleast 2 special characters\n4.Atleast 4 numbers\n");
	printf("\nEnter your password:\t");
	gets(str);
	
	printf("The password you have entered is:\n");
	
	int uc=0,lc=0,sp=0,nos=0,count=0;
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
		printf("%c",str[i]);
	}
	
	for(i=0;str[i]!='\0';i++)
	{
	 //uppercase
	 for(i=0;str[i]!='\0';i++)
	     {
	 	   if(str[i]>=65&&str[i]<=90)
	 	   uc++;
		 }	
		 
	//lowercase
	 for(i=0;str[i]!='\0';i++)
	     {
	 	   if(str[i]>=97&&str[i]<=122)
	 	   lc++;
		 }	
		 
    //special
     for(i=0;str[i]!='\0';i++)
	     {
	 	   if(str[i]>=33&&str[i]<=47)
	 	   sp++;
		 }	
		 
	//numbers
	
	 for(i=0;str[i]!='\0';i++)
	     {
	 	   if(str[i]>=48&&str[i]<=57)
	 	   nos++;
		 }	
		
	}
	
	if((uc>2&&lc>5&&sp>2&&nos>4))
	printf("\nYou have entered a Strong password");
	else if((uc==2)&&(lc==5)&&(sp==2)&&(nos==4))
	printf("\nYou have entered a Standard password");
	else if((uc>0&&uc<2)&&(lc>0&&lc<5)&&(sp>0&&sp<2)&&(nos>0&&nos<4))
	printf("\nYou have entered a weak password");
	else
	printf("\nYou have entered a very weak password");

}