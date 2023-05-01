#include "customerDetails.h"
#include "debug.h"

int validateCustomerName(char *name)
{
    int retVal = STATUS_OK;
    int i = 0;
    while(i < strlen(name))
    {
        if((name[i] >= 65 && name[i] <= 90 ) || (name[i] >= 97 && name[i] <= 122))
            i++;
        else
        {
            retVal = STATUS_NAME_VALIDATION_FAILED;
            break;
        }
    }
    return retVal;
}

int validatePhoneNumber(long long phone)
{
    if (phone < 1000000000 || phone >= 10000000000)
        return STATUS_PHONENUMBER_VALIDATION_FAILED;
    return STATUS_OK;
}

int validateGender(char *gender)
{
    if (strcmp(gender, "Male") != 0 && strcmp(gender, "Female") != 0 && strcmp(gender, "RatherNotSay") != 0)
        return STATUS_GENDER_VALIDATION_FAILED;
    return STATUS_OK;
}

int validateMailId(char *mailId)
{
    char *substr = strrchr(mailId, '@');
    if (!substr)
        return STATUS_EMAIL_VALIDATION_FAILED;
    if(strcmp(substr+1, "gmail.com") != 0 && strcmp(substr+1, "outlook.com") != 0)
        return STATUS_EMAIL_VALIDATION_FAILED;
    return STATUS_OK;
}

int validateDOB(char *dob)
{
    int len = strlen(dob);
    if(len != 10)
        return STATUS_DOB_VALIDATION_FAILED;
    char *substr = strchr(dob, '-');

    int dayLen = substr-dob;
    char day[3];
    strncpy(day, dob, dayLen);
    int iDay = atoi(day);
    if(iDay < 1 || iDay > 31)
        return STATUS_DOB_VALIDATION_FAILED;

    char *year = strchr(substr+1, '-');
    int monthLen = year - (substr+1);
    char month[3];
    strncpy(month, substr+1, monthLen);
    int iMonth = atoi(month);
    if(iMonth < 1 || iMonth > 12)
        return STATUS_DOB_VALIDATION_FAILED;

    year = year+1;
    int iYear = atoi(year);
    if((iYear == 2023 && iMonth != 1) || (iYear < 1970 || iYear > 2023))
        return STATUS_DOB_VALIDATION_FAILED;

    return STATUS_OK;
}

int validatePassword(char * password)
{
    int len = strlen(password);
    int i = 0;
    int capitalPolicy = 0;
    int smallPolicy = 0;
    int specialCharPolicy = 0;
    int numericPolicy = 0;
    int policyCount = 0;
    if (len < 8)
        return STATUS_PASSWORD_VALIDATION_FAILED;
    while (i < len)
    {
        if (!capitalPolicy && password[i] >= 65 && password[i] <= 90)
        {
            policyCount++;
            capitalPolicy = 1;
        }
        if(!smallPolicy && password[i] >= 97 && password[i] <= 122)
        {
            smallPolicy = 1;
            policyCount++;
        }
        if(!specialCharPolicy && (password[i] >= 33 && password[i] <= 47) || (password[i] >= 58 && password[i] <= 64))
        {
            specialCharPolicy = 1;
            policyCount++;
        }
        if(!numericPolicy && password[i] >= 48 && password[i] <= 57)
        {
            numericPolicy = 1;
            policyCount++;
        }
        if(policyCount == 4)
            break;
        i++;
    }
    if (policyCount < 4)
        return STATUS_PASSWORD_VALIDATION_FAILED;
    return STATUS_OK;
}

int validateUserName(char *uname)
{
    int retVal = STATUS_OK;
    int i = 0;

    for (; strcmp(userNameArray[i], "") != 0; i++ )
    {
        DBG(" Info: the username in array is [%s] ---- comparing with ---- [%s]\n",  userNameArray[i], uname);
        if(strcmp(userNameArray[i], uname) == 0)
            return STATUS_USERNAME_VALIDATION_FAILED;
    }
    return retVal;
}

int validateCustomerDetails(struct customer *customerEntry)
{
    int retVal = STATUS_OK;
    retVal = validateCustomerName(customerEntry->name);
    if(retVal != STATUS_OK)
        return retVal;
    
    retVal = validatePhoneNumber(customerEntry->phoneNumber);
    if(retVal != STATUS_OK)
        return retVal;

    retVal = validateMailId(customerEntry->mailId);
    if(retVal != STATUS_OK)
        return retVal;

    retVal = validateGender(customerEntry->gender);
    if(retVal != STATUS_OK)
        return retVal;

    retVal = validateDOB(customerEntry->dob);
    if(retVal != STATUS_OK)
        return retVal;
    
    retVal = validatePassword(customerEntry->password);
    if(retVal != STATUS_OK)
        return retVal;

    retVal = validateUserName(customerEntry->userName);
    if(retVal != STATUS_OK)
        return retVal;
	return retVal;
}

