#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
	char alphabet[100];
	FILE *fptr; 
	fptr=fopen("Basic.txt","r");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	fscanf(fptr,"%s",&alphabet);
	printf("%s",alphabet);
	fclose(fptr);
	return 0;
}