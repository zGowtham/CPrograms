#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	char alpha[100];
	FILE *fptr;
	fptr=fopen("Basic.txt","w");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	
	printf("Enter the string: ");	
	scanf("%s",&alpha);
	fprintf(fptr,"%s",alpha);	
	fclose(fptr);
	return 0;
}