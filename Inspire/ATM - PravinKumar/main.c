/* Task Name 	  : Bank_Project
   Developer Name : A.Pravinkumar
   Date           : 20-01-2023 */

#include "bank.h"
#include "validateDetails.h"
#include "errorHandler.h"
#include "debug.h"

float openingBalance = MACRO_OPENING_Balance;

int initializeData(struct customer customerDetails[], int *lastIndex, int *lastAccountNumber)
{
	DBG(" Function: Entry to %s\n", __func__);
	char buffer[444];
	char balanceBuffer[100];
    int val;
	int i = 0, j=0;
	FILE *fp, *fBalanceDB = NULL;
	DBG(" Info: Opening %s file\n", MACRO_DATA_FILE_NAME);
    fp = fopen(MACRO_DATA_FILE_NAME, "r");
	if (access(MACRO_BALANCE_DB_FILE_NAME, F_OK) == 0) 
	{
		DBG(" Info: Opening %s file\n", MACRO_BALANCE_DB_FILE_NAME);
		fBalanceDB = fopen(MACRO_BALANCE_DB_FILE_NAME, "r");
	}
	else
		DBG(" Error: Failed to find %s file\n", MACRO_BALANCE_DB_FILE_NAME);
	
    while( fscanf(fp, "%s", buffer) == 1)
    {
		{
			DBG(" Info: buffer extracted from %s file is [%s]\n", MACRO_DATA_FILE_NAME, buffer);
			char *token = strtok(buffer, ","); // extracting token
			token = strtok(NULL, ",");
			strcpy(customerDetails[i].name, token);
			token = strtok(NULL, ",");
			strcpy(customerDetails[i].dob, token);
			token = strtok(NULL, ",");
			strcpy(customerDetails[i].gender, token);
			token = strtok(NULL, ",");
			int accountNumber = atoi(token);
			customerDetails[i].accountNumber = accountNumber;
			*lastAccountNumber = accountNumber;
			token = strtok(NULL, ",");
			strcpy(customerDetails[i].mailId, token);
			token = strtok(NULL, ",");
			long long phoneNumber = atoll(token);
			customerDetails[i].phoneNumber = phoneNumber;
			token = strtok(NULL, ",");
			strcpy(customerDetails[i].userName, token);
			strcpy(userNameArray[i], token);
			token = strtok(NULL, ",");
			strcpy(customerDetails[i].password, token);
		}
		// Updating the balance to specific customer
		{
			for(; i<j; j++)
			{
				if(fscanf(fBalanceDB, "%s", balanceBuffer) == 1)
				{
					DBG(" Info: Buffer extracted from %s file is [%s]\n", MACRO_BALANCE_DB_FILE_NAME, balanceBuffer);
				}
				else
					DBG(" Error: Read failed for %s file \n", MACRO_BALANCE_DB_FILE_NAME);
			}
			if(fscanf(fBalanceDB, "%s", balanceBuffer) == 1)
			{
				DBG(" Info: Buffer extracted from %s file is [%s]\n", MACRO_BALANCE_DB_FILE_NAME, balanceBuffer);
				char *token = strtok(balanceBuffer, ","); // for index
				token = strtok(NULL, ",");
				int accountNumber = atoi(token);
				token = strtok(NULL, ",");
				float balance = atof(token);
				customerDetails[i].balance = balance;
			}
			else
				DBG(" Error: Read failed for %s file \n", MACRO_BALANCE_DB_FILE_NAME);
		}

		i++;
    }
	*lastIndex = i;
	DBG(" Info: the last index value is [ %d ]", *lastIndex);
    fclose(fp);
	// while(fscanf(fBalanceDB, "%s", balanceBuffer) == 1)
	// {
	// 	{
	// 		DBG(" Info: Buffer extracted from %s file is [%s]\n", MACRO_BALANCE_DB_FILE_NAME, balanceBuffer);
	// 		char *token = strtok(balanceBuffer, ",");
	// 		int accountNumber = atoi(token);
	// 		token = strtok(NULL, ",");
	// 		float balance = atof(token);
	// 		customerDetails[i].balance = balance;
	// 	}
	// }
	fclose(fBalanceDB);
	DBG(" Function: Exit from %s\n", __func__);
	return 0;
}

int updateDatabase(struct customer customerEntry, int index)
{
	DBG(" Function: Entry to %s\n", __func__);
	FILE *fp;
	fp = fopen(MACRO_DATA_FILE_NAME, "a+");
	fprintf(fp, "%d,%s,%s,%s,%d,%s,%lld,%s,%s\n", index, customerEntry.name, customerEntry.dob, customerEntry.gender, customerEntry.accountNumber, customerEntry.mailId, customerEntry.phoneNumber, customerEntry.userName, customerEntry.password);
	fclose(fp);
	DBG(" Function: Exit from %s\n", __func__);
	return 0;
}

void inputCustomerDetails(struct customer *customerEntry, int inputParam)
{
	DBG(" Function: Entry to %s\n", __func__);
	if(!inputParam || inputParam == e_name)
	{
		printf(" Enter your name: ");
		scanf("%s", (*customerEntry).name);
	}		
	if(!inputParam || inputParam == e_dob)
	{
		printf(" Enter your Date of Birth (DD-MM-YYYY): ");
		scanf("%s", customerEntry->dob);
	}
	if(!inputParam || inputParam == e_gender)
	{
		printf(" Enter your Gender (Male/Female/RatherNotSay): ");
		scanf("%s", customerEntry->gender);
	}
	if(!inputParam || inputParam == e_mailId)
	{
		printf(" Enter your E-mail Address (@gmail.com/@outlook.com) :");
		scanf("%s", customerEntry->mailId);
	}
	if(!inputParam || inputParam == e_phoneNumber)
	{
		printf(" Enter your phone number: ");
		scanf("%lld", &(customerEntry->phoneNumber));
	}
	if(!inputParam || inputParam == e_userName)
	{
		printf(" Enter your user name: ");
		scanf("%s", customerEntry->userName);
	}
	if(!inputParam || inputParam == e_password)
	{
		printf("Password must have  \n1)one Upper case\n2)One lower case\n3)One special character\n4)One numeric value\n5)Password length greater 8 char\n Enter your password: ");
		scanf("%s", customerEntry->password);
	}
	DBG(" Function: Exit from %s\n", __func__);
}

void showCustomerDetails(struct customer customerEntry, int verification)
{
	DBG(" Function: Entry to %s\n", __func__);
	printf(" =========== Customer Details ===========\n");
	if(!verification)
		printf(" Customer Account number: %u\n", customerEntry.accountNumber);
	printf(" Custmer Name: %s\n", customerEntry.name);
	printf(" Customer DOB (in DD-MM-YYYY): %s\n", customerEntry.dob);
	printf(" Customer Gender: %s\n", customerEntry.gender);
	printf(" Customer E-mail address: %s\n", customerEntry.mailId);
	printf(" Customer Phone number: %lld\n", customerEntry.phoneNumber);
	printf(" Customer User Name: %s\n", customerEntry.userName);
	if(customerEntry.balance)
		printf(" Customer available Balance: %f\n", customerEntry.balance);
	printf(" =================================\n");
	DBG(" Function: Exit from %s\n", __func__);
}

int customerRegistration(struct customer *customerEntry, int inputType)
{
	DBG(" Function: Entry to %s\n", __func__);
	printf(" =============== Customer Registration =============== \n");
	inputCustomerDetails(customerEntry, inputType);
	return validateCustomerDetails(customerEntry);
	DBG(" Function: Exit from %s\n", __func__);
}


// int updateBalanceDatabase(int accountNumber, float balance)
// {
// 	DBG(" Function: Entry to %s\n", __func__);
//     FILE *fp;
//     if(access(MACRO_BALANCE_DB_FILE_NAME, F_OK) == 0)
//     {
//         fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "r");
//         FILE *p1 = fopen("./temp", "w");
//         char buffer[100];
//         while(fscanf(fp, "%s", buffer) == 1)
//         {
//             char *token = strtok(buffer, ",");
//             int accountId = atoi(token);
//             if(accountId == accountNumber)
//                 fprintf(p1, "%d,%f\n", accountId, balance);
//             else
//                 fprintf(p1, "%s\n", buffer);
//         }
//         fclose(p1);
//         fclose(fp);

//         fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "w");
//         p1 = fopen("./temp", "r");
//         char buf1[100];
//         while(fscanf(p1, "%s", buf1) == 1)
//         {
//             fprintf(fp, "%s\n", buf1);
//         }
//         fclose(p1);
//         fclose(fp); 
//         remove("./temp");
//     }
//     else
//     {
//         fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "a+");
//         fprintf(fp, "%d,%f\n", accountNumber, balance);
//         fclose(fp);
//     }
// 	DBG(" Function: Exit from %s\n", __func__);
// }

int updateBalanceToDatabase(int index, int accountNumber, float balance, int newRegisration)
{
    DBG(" Function: Entry to %s\n", __func__);
    if(access(MACRO_BALANCE_DB_FILE_NAME, F_OK) == 0)
    {
		if(!newRegisration)
		{
			FILE *fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "r");
			FILE *p1 = fopen(MACRO_BALANCE_DB_TEMP_FILE_NAME, "w");
			char buffer[100];
			while(fscanf(fp, "%s", buffer) == 1)
			{
				char tempBuf[100];
				strcpy(tempBuf, buffer);
				char *token = strtok(buffer, ",");
				int idx = atoi(token);
				if(idx == index)
					fprintf(p1, "%d,%d,%f\n", index, accountNumber, balance);
				else
					fprintf(p1, "%s\n", tempBuf);
			}
			
			fclose(p1);
			fclose(fp);
			
			remove(MACRO_BALANCE_DB_FILE_NAME);
			rename(MACRO_BALANCE_DB_TEMP_FILE_NAME, MACRO_BALANCE_DB_FILE_NAME);

			// fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "w");
			// p1 = fopen("./temp", "r");
			// char buf1[100];
			// while(fscanf(p1, "%s", buf1) == 1)
			// {
			// 	fprintf(fp, "%s\n", buf1);
			// }
			// fclose(p1);
			// fclose(fp); 
			// remove("./temp");
		}
		else
		{
			FILE *fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "a+");
			fseek(fp, 0, SEEK_END);
			DBG(" Info: current position in file %ld\n", ftell(fp));
			fprintf(fp, "%d,%d,%f\n", index, accountNumber, balance);
			fclose(fp);
		}
    }
    else
    {
		DBG(" Info: The file %s is not found, hence creating one\n", MACRO_BALANCE_DB_FILE_NAME);
		FILE *fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "a+");
		fprintf(fp, "%d,%d,%f\n", index, accountNumber, balance);
		fclose(fp);
	}
	DBG(" Function: Exit from %s\n", __func__);
}

void deposit(struct customer *customerEntry, int index)
{
    float depositAmount;
    printf("Enter the depositAmount :");
    scanf("%f",&depositAmount);
    customerEntry->balance+=depositAmount;
    updateBalanceToDatabase(index, customerEntry->accountNumber, customerEntry->balance, 0);
    printf("Your total available balance is :%f\n",customerEntry->balance);
}

void withdraw(struct customer *customerEntry, int index)
{
    float withdrawAmount,remainingBalance=0;
    printf("Enter the withdrawAmount :");
    scanf("%f",&withdrawAmount);
    remainingBalance=customerEntry->balance-1000.00;
    if(withdrawAmount<=remainingBalance && withdrawAmount>0)
    {
        customerEntry->balance-=withdrawAmount;
		updateBalanceToDatabase(index, customerEntry->accountNumber, customerEntry->balance, 0);
        printf("Your total available balance after withdraw : %f\n",customerEntry->balance);
    }
    else
        printf("Your Balance is too low to process the withdrawal.. Unable to dispense the requested amount\n");
    
}

void registerNewCustomer(struct customer customerDetails[], int *lastIndex, int *accountNumber)
{
	int opt = 1;
	int status = STATUS_OK;
	int idx = 0;
	if(*lastIndex != -1)
		idx = *lastIndex;
	while(opt == 1)
	{
		status = customerRegistration(&customerDetails[idx], status);
		if(!status)
		{
			printf(" Customer Registration Successful\n");
			customerDetails[idx].accountNumber = *accountNumber;
			showCustomerDetails(customerDetails[idx], MACRO_FLAG_OUTPUT_VERIFY_STAGE);
			int confirm = 0;
			printf("============= Acknowledgement =============\n");
			printf(" \"I, (%s) hereby acknowledge that the above information are true to my knowledge\"\n", customerDetails[idx].name);
			while(1)
			{
				printf(" Please enter 1 to confirm or 0 to discard (1/0): ");
				scanf("%d", &confirm);
				fflush(stdin);
				if(confirm == 1)
				{
					DBG(" Info: current index = %d\n", idx);
					updateDatabase(customerDetails[idx], idx);
					customerDetails[idx].balance = 1000.00;
					updateBalanceToDatabase(idx, customerDetails[idx].accountNumber, customerDetails[idx].balance, 1);
					strcpy(userNameArray[idx], customerDetails[idx].userName);
					*accountNumber++;
					idx++;
					*lastIndex = idx;
					printf(" Registration Successfull\n");
					break;
				}
				else if(confirm == 0)
				{
					printf(" Above provided informations are discarded (or) not registered\n");
					break;
				}
				else
				{
					printf(" Invalid entry.. .Please try again\n");
				}
			}
			break;
		}
		else
		{
			printf(" Customer Registration failed...\n");
			printRegistrationError(status);
			printf(" Do you wish to re-register again? (1/0): ");
			scanf("%d", &opt);
			fflush(stdin);
		}
	}
}


int main()
{
	DBG(" Info: Entering %s\n", __func__);
	struct customer customerDetails[100];
	int lastIndex = -1;
	int lastAccountNumber = 0;
	int currentIndex = -1;
	if (access(MACRO_DATA_FILE_NAME, F_OK) == 0) {
        initializeData(customerDetails, &lastIndex, &lastAccountNumber);
    }
	int option = 0;
	int accountNumber = lastAccountNumber? lastAccountNumber+1 : 100001;
	do
	{
		printf(" Welcome to ABC Bank\n");
		printf(" 1) Register as a New customer\n 2) Login for existing\n 3) Exit\n");
		printf(" Please enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				registerNewCustomer(customerDetails, &lastIndex, &accountNumber);
				break;
			case 2:
				if (lastIndex < 0)
				{
					printf(" Error: Sorry no customer entries available now\n");
					break;
				}
				char uName[100];
				char password[100];
				printf(" Enter you User Name: ");
				scanf("%s", uName);
				printf(" Enter you Password for login: ");
				scanf("%s", password);
				int i = 0;
				int userNameMatch = 0;
				int passwordMatch = 0;
				for (; i<=lastIndex; i++)
				{
					if (!strcmp(customerDetails[i].userName, uName))
					{
						userNameMatch = 1;
						if (!strcmp(customerDetails[i].password, password))
						{
							passwordMatch = 1;
							break;
						}
						// else
						// {
						// 	printf(" Password is not Matched\n");
							
						// 	break;
						// }
					}
				}
				// if(i>lastIndex)
				// {
				// 	printf("UserName is not exist\n");
				// 	break;
				// }
				if(!userNameMatch)
				{
					printf(" Login Error: Username not exists\n");
					break;
				}
				else if(!passwordMatch)
				{
					printf(" Login Error: Password not matching\n");
					break;
				}
				else
					printf(" Login Sucessful\n");
				int userMenuOption=0;
				do
				{    
					printf(" 1) View Customer Details \n 2) Deposit\n 3)Withdraw\n 4)Exit\n Choose the option :\n");
					scanf("%d",&userMenuOption);  
					switch(userMenuOption)
					{
						case 1:
							showCustomerDetails(customerDetails[i], STATUS_OK);
							break;
						case 2:
							deposit(&customerDetails[i], i);
							break;
						case 3:
							withdraw(&customerDetails[i], i);
							break;
						default:
							userMenuOption=4;
							break;
					}       
				}while(userMenuOption!=4);
				break;
			default:
				option=3;
				break;
		}
	} while (option != 3);
	return 0;
}