#include <stdio.h>
char letter(char alpha[]);

int main()
{
	int a,i;
	char alpha[5];
	letter(alpha);

	for(i=0;i<5;i++)
	{
	printf("%c",alpha[i]);
    }
}

char letter(char alpha[])
{
	int i;
	printf("Enter the alphabets: ");

	for(i=0;i<5;i++)
	{
	scanf(" %c",&alpha[i]);
	}
	return 0;
}
