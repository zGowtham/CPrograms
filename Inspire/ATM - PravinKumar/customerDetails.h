#define MACRO_FLAG_OUTPUT_VERIFY_STAGE 1
#define MACRO_FLAG_INPUT_ALL_DETAILS 0

struct customer {
	char name[100];
	char dob[11];
	char gender[16];
	int accountNumber;
	char mailId[100];
	long long phoneNumber;
	char userName[100];
	char password[100];
	float balance;
};

enum e_CustomerInputStructure {
	e_name = 1,
	e_dob,
	e_gender,
	e_mailId,
	e_phoneNumber,
	e_userName,
	e_password,
	e_accountnumber
};

char userNameArray[100][100] = {};