// 9- create a structure array of 5 elements of employee structure.

#include<stdio.h>
#include<string.h>

struct employee
{
	int empid;
	char empname[20];
	float salary;
	
};

int main()
{
	struct employee e1[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Employee id");
		scanf("%d",&e1[i].empid);
		printf("Enter name");
		scanf("%s",&e1[i].empname);
		printf("Enter salary");
		scanf("%f",&e1[i].salary);
	}
	
	printf("-----EMPLOYEE DETAILS ARE-----");
	
	for(i=0;i<5;i++)
	{
		printf("\n Employee id is : %d", e1[i].empid);
		printf("\n Employee name is : %s", e1[i].empname);
		printf("\n Employee salary is : %f", e1[i].salary);
		
		printf("----------------------------------------");
		
	}
	
	getch();
}


