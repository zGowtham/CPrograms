#include<stdio.h>
#include<string.h>

void pupil1(struct student s1);
void pupil2(struct student s2);
//extern int w = 100;

struct student
{
	char name[50];
	int phone;
	char address[50];
	int pincode;
	float id;
};


void pupil1(struct student s1)
{
	printf("\nStudent name is %s",s1.name);
	printf("\nStudent phone is %d",s1.phone);
	printf("\nStudent address is %s",s1.address);
	printf("\nStudent pincode is %d",s1.pincode);
	printf("\nStudent ID is %f",s1.id);
	printf("\nSize occupied by s1 is %d",sizeof(s1));
}

void pupil2(struct student s2)
{
	
	printf("\nStudent name is %s",s2.name);
	printf("\nStudent phone is %d",s2.phone);
	printf("\nStudent address is %s",s2.address);
	printf("\nStudent pincode is %d",s2.pincode);
	printf("\nStudent ID is %f",s2.id);
	printf("\nSize occupied by s2 is %d",sizeof(s2));

}

int main()
{
	printf("\nWelcome to structures: ");
	
	struct student s1={"Vishnu",234234242,"Hopes College",641040,123.2342342};
	struct student s2={"Vishal",000001231,"Kavundampalayam",641030,000.1231231};
	
	pupil1(s1);
	printf("\n");
	pupil2(s2);
}
