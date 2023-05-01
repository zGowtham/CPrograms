#include<stdio.h>

int main()
{
    char string[5][10] ={"Hey","How","Are","You","doing"};
	int i;
	char *ptr[];
	
	
	printf("The given strings are: \n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",string[i]);
	}
	
	ptr=&string;
	for(i=0;i<5;i++)
	{
	printf("\n%s",*ptr);
	ptr++;
	}
	
}