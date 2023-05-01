#include<stdio.h>

struct student
{
	int x,y;	
} s1;


struct stud
{
	int f;	
} s2;

int main()
{
	struct student s1 = {1,2};
	s1.x=10,s1.y=20;
	struct student *ptr = &s1;
	printf("%d,%d",ptr->x,ptr->y);
	printf("\nSize occupied by s1 is %d",sizeof(s1));

	struct stud s2;
	s2.f=100;
	struct stud *ptr2 = &s2;
	printf("\n%d,%d",ptr2->f,ptr2->f);
	printf("\nSize occupied by s1 is %d",sizeof(s2));
                      
}