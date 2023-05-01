#include<stdio.h>
#include<string.h>

struct student1
{
	char name[50];
	int phone;
	char address[50];
	int pincode;
	float id;
} s1;

struct student2
{
	char name[20];
	int phone;
	char address[50];
	int pincode;
	float id;
} s2;


int main()
{
	strcpy(s1.name,"Vishnu");
	s1.phone=234234242;
	strcpy(s1.address,"Hopes College");
	s1.pincode=641010;
	s1.id=123.1324221;
	
	printf("\nStudent name is %s",s1.name);
	printf("\nStudent phone is %d",s1.phone);
	printf("\nStudent address is %s",s1.address);
	printf("\nStudent pincode is %d",s1.pincode);
	printf("\nStudent ID is %f",s1.id);
	
	printf("\n");
	
	strcpy(s2.name,"Vishal");
	s2.phone=43564232;
	strcpy(s2.address,"Saibaba Colony");
	s2.pincode=641045;
	s2.id=129.1324221;
	
	printf("\nStudent name is %s",s2.name);
	printf("\nStudent phone is %d",s2.phone);
	printf("\nStudent address is %s",s2.address);
	printf("\nStudent pincode is %d",s2.pincode);
	printf("\nStudent ID is %f",s2.id);
}
	
