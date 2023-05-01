#include<stdio.h>

union student
{
	int x;	
}s1;


union stud
{
	int f;
	int g;
}s2;

int main()
{
	union student s1 = {1};
	s1.x=190;
	union student *ptr = &s1;
	printf("%d",ptr->x);
	
	printf("\nSize occupied by s1 is %d",sizeof(s1));

	
	union stud s2 = {5};
	s2.f=444;
	s2.g=12;
	union stud *ptr2 = &s2;
	printf("\n%d\t%d",ptr2->f,ptr2->g);

	printf("\nSize occupied by s2 is %d",sizeof(s2));

}