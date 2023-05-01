int updateBalanceDatabase(int accountNumber, float balance)
{
    printf(" Update inside\n");
    FILE *fp;
    if(access(MACRO_BALANCE_DB_FILE_NAME, F_OK) == 0)
    {
        printf(" Update if\n");
        fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "r");
        FILE *p1 = fopen("./database/temp", "w");
        char buffer[100];
        while(fscanf(fp, "%s", buffer) == 1)
        {
            char *token = strtok(buffer, ",");
            int accountId = atoi(token);
            if(accountId == accountNumber)
                fprintf(p1, "%d,%f\n", accountId, balance);
            else
                fprintf(p1, "%s\n", buffer);
        }
        fclose(p1);
        fclose(fp);

        fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "w");
        p1 = fopen("./database/temp", "r");
        char buf1[100];
        while(fscanf(p1, "%s", buf1) == 1)
        {
            fprintf(fp, "%s\n", buf1);
        }
        fclose(p1);
        fclose(fp);
        //if (remove("abc.txt") == 0) 
        remove("./database/temp");
    }
    else
    {
        printf(" Update else\n");
        fp = fopen(MACRO_BALANCE_DB_FILE_NAME, "a+");
        fprintf(fp, "%d,%f\n", accountNumber, balance);
        fclose(fp);
    }
}


