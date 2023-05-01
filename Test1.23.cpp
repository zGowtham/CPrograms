#include<stdio.h>

int main()
{
	int student, subject;
	printf("Enter the number of Students and subjects:\n");
	scanf("%d%d",&student,&subject);
	
	int i=0,j=0,sum=0,marks[student],subjecttotal[subject],average[subject];
	for(i=0;i<subject;i++)
	{
		sum=0;
		printf("\nEnter the marks of subject[%d]\n\n",i+1);
		for(j=0;j<student;j++)
		{
			printf("Enter the marks of student[%d]\t",j+1);
			scanf("%d",&marks[j]);
			sum=sum+marks[j];		 	
		}
		subjecttotal[i]=sum;
		average[i]=sum/student;
		printf("\n\nThe total marks of students in this subject is %d",subjecttotal[i]);
		printf("\nThe average marks obtained by students is %d",average[i]);
	}
	
int amrita[subject];
for(i=0;i<subject;i++)
{
	amrita[i]=average[i];
}
	
	int temp=0;

for(i=0;i<subject;i++)
{

		for(j=0;j<subject;j++)
		{
			if(average[j]<average[j+1])
			{
				temp=average[j];
				average[j]=average[j+1];
				average[j+1]=temp;
			}
		}
	
}
	printf("\n The highest average is %d",average[0]);
	
	for(i=0;i<subject;i++)
	{
		if(average[0]==amrita[i])
		printf("\nThe highest average belongs to subject %d",i);
	}
}