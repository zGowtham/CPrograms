    #include "bank.h"

void printRegistrationError(int err)
{
    switch (err)
    {
        case STATUS_VALIDATION_FAILED:
            printf(" Regsitration Error: Generic Error something seems to be invalid\n");
            break;
        case STATUS_NAME_VALIDATION_FAILED:
            printf(" Regsitration Error: Name is invalid\n");
            break;
        case STATUS_DOB_VALIDATION_FAILED:
            printf(" Regsitration Error: DOB is invalid\n");
            break;
        case STATUS_GENDER_VALIDATION_FAILED:
            printf(" Regsitration Error: Gender is invalid\n");
            break;
        case STATUS_EMAIL_VALIDATION_FAILED:
            printf(" Regsitration Error: Email Address is invalid\n");
            break;
        case STATUS_PHONENUMBER_VALIDATION_FAILED:
            printf(" Regsitration Error: Phone Number is invalid\n");
            break;
        case STATUS_PASSWORD_VALIDATION_FAILED:
            printf(" Regsitration Error: Password is invalid\n");
            break;
        case STATUS_USERNAME_VALIDATION_FAILED:
            printf(" Regsitration Error: Usernam already exists\n");
            break;
        default:
            printf(" Regsitration Error: Something went wrong, please try again... \n");
    }
}
