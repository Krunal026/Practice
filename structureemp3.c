// // 6- create a structure employee  for having 3 members empno,empname , salary , designation

#include<stdio.h>
struct employee
{
	int empno;
	char empname[30];
	float salary;
	char designation[30];
};

int main()
{
	struct employee e1, e2, e3;
	
	
	printf("Enter name of employee");
	scanf("%s",&e1.empname);
	printf("Enter employee number");
	scanf("%d",&e1.empno);
	printf("Enter salary");
	scanf("%f",&e1.salary);
	printf("Enter disignation");
	scanf("%s",&e1.designation);
	

	
	printf("\n \n For Employee one");
	
	printf("\n Employee name is : %s",e1.empname);
	printf("\n Employee number is : %d",e1.empno);
	printf("\n employee salary is : %f",e1.salary);
	printf("\n employee designation is : %s",e1.designation);
	
	
	
	
	printf("\n \n Enter name of employee");
	scanf("%s",&e2.empname);
	printf("Enter employee number");
	scanf("%d",&e2.empno);
	printf("Enter salary");
	scanf("%f",&e2.salary);
	printf("Enter disignation");
	scanf("%s",&e2.designation);
	
	printf("\n \n For employee two");
	
	
	printf("\n Employee name is : %s",e2.empname);
	printf("\n Employee number is : %d",e2.empno);
	printf("\n employee salary is : %f",e2.salary);
	printf("\n employee designation is : %s",e2.designation);
	
	
	printf("\n \n Enter name of employee");
	scanf("%s",&e3.empname);
	printf("Enter employee number");
	scanf("%d",&e3.empno);
	printf("Enter salary");
	scanf("%f",&e3.salary);
	printf("Enter disignation");
	scanf("%s",&e3.designation);
	
	printf("\n \n For employee three");
	
	printf("\n Employee name is : %s",e3.empname);
	printf("\n Employee number is : %d",e3.empno);
	printf("\n employee salary is : %f",e3.salary);
	printf("\n employee designation is : %s",e3.designation);
	
	getch();
	
	
}
