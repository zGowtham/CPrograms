#include<stdio.h>
//#pragma pack(1)

int main()
{
	
	struct bank
	{
		int branch;
		char address;
		int pincode;
	} kvb;
	
	struct book
	{
		char branch;
		char address;
		char pincode;
	} SIB;
	
	struct b
	{
		int branch;
		char address;
		char pincode;
	} bbb;
	
	printf(" The size of the given structure is %d",sizeof(kvb));
	printf("\n The size of the given structure is %d",sizeof(SIB));
	printf("\n The size of the given structure is %d",sizeof(bbb));
}