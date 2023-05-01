#include <stdio.h>
#include <string.h>
//kokll`o
int compareTwoString(char str1[], char str2[])
{
    static int i = 0; 
    printf("\nhello %d",i);
    
	int l1 = strlen(str1);
    int l2 = strlen(str2);
    static int c = 0; 
    
    if (l1 != l2)
    {
        return 0;
    }
    
    else if (i < l1)
    {
        if (str1[i] == str2[i])
        c++; 
        i++;
        compareTwoString(str1, str2);
    	printf("\n%d%d",i,c);
    }
    
    if (c == i)
    {
        return 1;
    }  
}

int main()
{
    char str1[50], str2[50], c;
	printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    c=compareTwoString(str1, str2);
    if (c)
    {
        printf("\nstrings are equal");
    }
    else
    {
        printf("\nstrings are not equal");
    }
	return 0;
}
