#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define STATUS_OK 0
#define STATUS_NAME_VALIDATION_FAILED 1
#define STATUS_DOB_VALIDATION_FAILED 2
#define STATUS_GENDER_VALIDATION_FAILED 3
#define STATUS_EMAIL_VALIDATION_FAILED 4
#define STATUS_PHONENUMBER_VALIDATION_FAILED 5
#define STATUS_USERNAME_VALIDATION_FAILED 6
#define STATUS_PASSWORD_VALIDATION_FAILED 7
#define STATUS_VALIDATION_FAILED 10

#define MACRO_DATA_FILE_NAME "data.txt"
#define MACRO_BALANCE_DB_FILE_NAME "balanceDB.txt"
#define MACRO_BALANCE_DB_TEMP_FILE_NAME "temp.txt"
#define MACRO_OPENING_Balance 1000;