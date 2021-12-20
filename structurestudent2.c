// 4- repeat the above program accepting values from the user for students


#include<stdio.h>
#include<string.h>

struct student
{
	int rno;
	char name[40];
	char city[20];
	char state[20];
	
}s1;

int main()
{
	printf("\n  Enter the name of student");
	scanf("%s",&s1.name);
	printf(" \n Enter students roll number");
	scanf("%d",&s1.rno);
	printf(" \n Enter Students city");
	scanf("%s",&s1.city);
	printf(" \n Enter students state");
	scanf("%s",&s1.state);
	
	printf("\n ---- STUDENT DETAILS ARE----");
	
	
	
	
	printf("\n Name of student is : %s",s1.name);
	printf("\n Roll number : %d",s1.rno);
	printf("\n City of student : %s",s1.city);
	printf("\n State of student : %s", s1.state);
	
	getch();
	
}
