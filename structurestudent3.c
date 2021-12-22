/* structure to store student rollno,name,marks of 3 sub and cal. percentage */

#include<stdio.h>
int main()
{

struct student
{
	int rno;
	char name[20];
	int m1;
	int m2;
	int m3;
	float per;
}s1;


	printf("Enter students Roll number , name , and marks of three subjects");
	scanf("%d%s%d%d%d",&s1.rno,&s1.name,&s1.m1,&s1.m2,&s1.m3);
	
	s1.per=(s1.m1+s1.m2+s1.m3)*100/300;
	
	printf("\n Roll number : %d \n Name : %s \n Percentage : %f",s1.rno,s1.name,s1.per);
	
	getch();
	
}


