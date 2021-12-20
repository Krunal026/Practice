// 3- create a structure student having members rno,name,city,state

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
	s1.rno=26;
	strcpy(s1.name,"Krunal bhau jibhkate");
	strcpy(s1.city,"Nagpur");
	strcpy(s1.state,"Maharashtra");
	
	
	printf("\n Name of student is : %s",s1.name);
	printf("\n Roll number : %d",s1.rno);
	printf("\n City of student : %s",s1.city);
	printf("\n State of student : %s", s1.state);
	
	getch();
	
}
