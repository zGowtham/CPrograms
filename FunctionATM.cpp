#include<stdio.h>

void deposit1();
void withdraw1();
void balance1();
void pinchange();

int pin=1997,pin1,newpin, newpin1, choice, deposit, withdraw;
int balance=10000;
int newbalance=10000;
char newchoice;

int main()
{
	printf("*****Welcome to Mariamman Indian Bank*****");
	printf("\n\n\n1>Deposit\t\t\t2>Withdraw\n\n3>Balance Enquiry\t\t4>Pin Change");
	label:
	printf("\n\nEnter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: deposit1();
		break;
		
		case 2: withdraw1();
		break;
		
		case 3: balance1();
		break;
		
		case 4: pinchange();
		break;
	}
	
	printf("\nDo you wish to continue\nEnter Y or N\n");
	scanf(" %c",&newchoice);
	if(newchoice=='Y')
	{
		goto label;
	}
	else
	{
	printf("\nHave a great day");
    }
	
}
void deposit1()
{
	printf("\nHow much do you want to deposit");
	scanf("%d",&deposit);
	newbalance=balance+deposit;
	printf("\nDeposit Successful\nYour updated Balance is %d",newbalance);	
}


void withdraw1()
{
	printf("\nHow much do you want to withdraw");
	scanf("%d",&withdraw);
	newbalance=balance-withdraw;
	printf("\nWithdraw Successful\nYour updated Balance is %d",newbalance);
}

void balance1()
{
	printf("Your balance is %d",newbalance);

}

void pinchange()
{
	printf("Enter your current pin: \n");
	scanf("%d",&pin1);
	if(pin1==pin)
	{
		label1:
		printf("\nEnter your new pin");
		scanf("%d",&newpin);
		if(newpin==pin)
		{
		printf("\nYour new pin as same as your old pin, please enter a new pin:");
		goto label1;
	    }
		label2:
		printf("\nRe-enter your new pin");
		scanf("%d",&newpin1);
		if(newpin1==newpin)
		{
			printf("\nPin change is successful, your new pin is %d",newpin1);
		}
		else
		{
		printf("\nPlease check the pin you have entered");
		goto label2;
	    }
	}	
}
