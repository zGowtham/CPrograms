#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
	char words[100];
	FILE *fptr;
	fptr=fopen("Basic.txt","a");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter what you wanted to add:\t");
	scanf("%s",&words);
	fprintf(fptr,"%s",words);
	fclose(fptr);
	return 0;
}
