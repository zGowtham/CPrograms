#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include "banking_option.h"
char name[50];
char password [250];
char gender[50];
char mailid[50];
char phoneno[50];
char username1 [50];
char password1 [50];
char dob[50];
char username [50];	
int bal=1000;
char user[100];

void pass()
{
	int l,i,caps=0,small=0,ints=0,symbol=0;
    printf("Enter your password  :\n");
    printf("Password must be have atlest 1 uppercase, 1 lowercase, 1 digits and 1 symbols\n");
	gets(password);
	l=strlen(password);
	for(i=0;i<l;i++)
	{
		if(password[i]>='A'&&password[i]<='Z')
		{
			caps++;
		}
	    else if(password[i]>='a'&&password[i]<='z')
    	{
	    	small++;
	    }
	    else if(password[i]>='0'&&password[i]<='9')
	    {
	    	ints++;
	    }
		else
		{
			symbol++;
		}
	}
		if(caps!=0&&small!=0&&ints!=0&&symbol!=0)
        {
        printf("\n");
        printf("Registration  Successful! \n");
	    }
		else
		{
			printf("invalied password\n");
			pass();
	    }
	    return 0;
}
void gen()
	{
	int option;
	char str[50]={"Male"};
	char str1[50]={"Female"};
	printf("Gender 1.Male 2.Female  :\n");
	printf("Enter your option\n");
	scanf("%d",&option);
	if(option==1)
	{
		strcpy(gender,str);
		puts(gender);
	}
    else if(option==2)
	{
		strcpy(gender,str1);
		puts(gender);
	}
	else
	{
		printf("Invilied Option\n");
		gen();
	}
	return 0;
	}
void mail()
	{
		printf("Mailid  :\n");
		gets(mailid);
	    gets(mailid);
	}
void phone()
	{
		printf("Enter your phone number  :\n");
	    gets(phoneno);
	}
void passcmp()
{
	    printf("Enter a password  :\n");
		gets(password1);
		if(strcmp(password,password1)==0)
		 {
			printf("\n");
	        printf("                    Welcome to ABC Bank  \n");
	        printf("\n");
	        printf("Name of account holder  : ");
        	puts(name);
        	printf("DOB of holder  : ");
	        puts(dob);
	        printf("Gender : ");
	        puts(gender);
	       	printf("Mailid  : ");
	        puts(mailid);
	        printf("Phone number of holder  : ");
	        puts(phoneno);
		  }
		else
		{
			printf("Wrong password\n");
			passcmp();
		}
}
void use()
{
		  printf("Enter a user name  :\n");
	      gets(username1);
	      if(strcmp(username,username1)==0)
	       {
            passcmp();		    
	       }
	      else
	       {
		    printf("Wrong user name\n");
		    use();
	       }
	       return 0;
}
	void choice()
   {
   	int d;
	    printf("\n");
		printf("1.Deposite\n");
		printf("2.Withdrwal\n");
		printf("3.Balance\n");
		printf("4.Exit\n");
	    printf("enter a option\n");
	    scanf("%d",&d);
	
	    
	if(d==1)
	{
		deposite();
	}
	else if(d==2)
	{
		withdrwal();
		
	}
	else if(d==3)
	{
		balance();
	}
	else if(d==4)
	{
		exit(1);
	}

else
{
	printf("Wrong entry");
	choice();
}
	
}
void deposite()
{
	int e;
	printf("Enter deposite amount\n");
	scanf("%d",&e);
	bal=bal+e;
	printf("Balance=%d",bal);
	choice();
	
}
void withdrwal()
{
	int amount;
	printf("Enter a amount\n");
	scanf("%d",&amount);
	if(amount>bal)
	{
		printf("INSUFFICIENT BALANCE \n");
		choice();
	}
	else
	{
	bal=bal-amount;
	printf("Balance=%d",bal);
	choice();
    }
}
void balance()
{
	printf("%d",bal);
	choice();
}
int main()
{
    int a=0;
	int option;	
    printf("Welcome to ABC Bank  \n");
    printf("\n");
    printf("Enter your name  :\n");
	gets(name);
	printf("Enter a your DOB DD-MM-YYYY  :\n");
	gets(dob);
	gen();                                      \\ gender
    mail();
    phone();
	printf("Enter your user name  :\n");
	gets(username);
    pass();
    printf("\n");
    printf(" TO LOGIN ENTER USERNAME AND LOGIN PASSWORD\n");
    printf("\n");
    use();                                       \\username 
    choice();
  
}
