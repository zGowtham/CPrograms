#include <stdio.h> 

void next();
static int counter = 7; 
static int iteration = 1000;

int main()
{
printf("\n\t%d",iteration);
	while(counter<10)
    {
     next();
 	 counter++;
	}

printf("\n\t%d",iteration);
return 0;
}

void next() 
{  
//static int iteration = 13; 
iteration ++;
printf("\niteration=%d and counter= %d\n", iteration, counter);
}
