// 8- create a structure array of 10 elements of student strucure

#include<stdio.h>
#include<string.h>

struct student
{
	int rno;
	char name[20];
	char city[20];
	char state[20];
	
};

int main()
{
	struct student s1[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter roll number");
		scanf("%d",&s1[i].rno);
		printf("Enter name of student");
		scanf("%s",&s1[i].name);
		printf("Enter city");
		scanf("%s",&s1[i].city);
		printf("Enter state");
		scanf("%s",&s1[i].state);
		
	}
	
	printf("----DETAILS OF STUDENT ARE----");
	
	for(i=0;i<3;i++)
	{
		printf("\n Roll number is : %d",s1[i].rno);
		printf("\n Name is : %s",s1[i].name);
		printf("\n City is : %s",s1[i].city);
		printf("\n State is : %s",s1[i].state);
		
		printf("----------------------------------------");
		
	}
	
	getch();
	
}
