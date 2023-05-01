#include<stdio.h>

void add(struct arithmetic s1);
void subtract(struct arithmetic s2);
void multiply(struct arithmetic s3);
void subtract(struct arithmetic s4);

struct arithmetic
{
	int x;
	int y;	
	int z=x*y;
};

void add(struct arithmetic s1)
{
	int z=(s1.x)+(s1.y);
	struct arithmetic *ptr = &s1;

	printf("\nWelcome to addition:");
	printf("\n%d",s1.x);
	printf("\n%d",s1.y);
	printf("\n%d",z);
	printf("\n\t%d",ptr->z);	
	
}

void subtract(struct arithmetic s2)
{
	int z=(s2.x)-(s2.y);
	struct arithmetic *ptr = &s2;

	printf("\nWelcome to subtraction:");
	printf("\n%d",s2.x);
	printf("\n%d",s2.y);
	printf("\n%d",z);	
	printf("\n\t%d",ptr->z);	

}

void multiply(struct arithmetic s3)
{
	int z=(s3.x)*(s3.y);
	printf("\nWelcome to multiplication:");
	printf("\n%d",s3.x);
	printf("\n%d",s3.y);
	printf("\n%d",z);	
}

void divide(struct arithmetic s4)
{
	int z=(s4.x)/(s4.y);
	printf("\nWelcome to division:");
	printf("\n%d",s4.x);
	printf("\n%d",s4.y);
	printf("\n%d",z);	
}


int main()
{
	printf("\nWelcome to Structure Functions");
	
	struct arithmetic s1 ={20,10};
	struct arithmetic s2 = {10,7};
	struct arithmetic s3 = {10,10};
	struct arithmetic s4 = {100,30};

	add(s1);
	subtract(s2);
	multiply(s3);
	divide(s4);
}
