#include<stdio.h>

void add(struct arithmetic s1);
void subtract(struct arithmetic s1);
void multiply(struct arithmetic s1);
void subtract(struct arithmetic s1);

struct arithmetic
{
	int x;
	int y;	
	int z=x-y;
};

void add(struct arithmetic s1)
{
	int z=(s1.x)+(s1.y);
	printf("\nWelcome to addition:");
	printf("\n%d",s1.x);
	printf("\n%d",s1.y);
	printf("\n%d",z);
}

void subtract(struct arithmetic s1)
{
	int z=(s1.x)-(s1.y);
	printf("\nWelcome to subtraction:");
	printf("\n%d",s1.x);
	printf("\n%d",s1.y);
	printf("\n%d",z);	
}

void multiply(struct arithmetic s1)
{
	int z=(s1.x)*(s1.y);
	struct arithmetic *ptr = &s1;

	printf("\nWelcome to multiplication:");
	printf("\n%d",s1.x);
	printf("\n%d",s1.y);
	printf("\n%d",z);
	printf("\n\t%d",ptr->z);	
}

void divide(struct arithmetic s1)
{
	int z=(s1.x)/(s1.y);
	struct arithmetic *ptr = &s1;

	printf("\nWelcome to division:");
	printf("\n%d",s1.x);
	printf("\n%d",s1.y);
	printf("\n%d",z);	
	printf("\n\t%d",ptr->z);	

}


int main()
{
	printf("\nWelcome to Structure Functions");
	
	struct arithmetic s1 ={20,10};


	add(s1);
	subtract(s1);
	multiply(s1);
	divide(s1);
}
