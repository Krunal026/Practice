// create a structure student having members rno,name,course,fees pass this structure to print the structure 

#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	char course[20];
	float fees;
	
}s1;

void printstudent ( struct student s1);
int main()
{
	strcpy(s1.name,"Krunal");
	s1.rno=10;
	strcpy(s1.course,"Dotnet");
	s1.fees=70000;
	
	printstudent(s1);
}

void printstudent ( struct student s1)
{
	printf("\n STUDENT DETAILS ARE");
	printf("\n Student name is :%s",s1.name);
	printf("\n Student roll number is :%d",s1.rno);
	printf("\n Student course is :%s",s1.course);
	printf("\n Course fees is :%f",s1.fees);
	
	getch();
	
}
