// 5 - create a structure employee having members empno,empname , salary , designation

#include<stdio.h>
struct employee
{
	int empno;
	char empname[30];
	float salary;
	char designation[30];
}e1;

int main()
{
	e1.empno=10;
	strcpy(e1.empname,"krunal jibhkate");
	e1.salary=2000.00;
	strcpy(e1.designation,"Senior manager");
	
	
	printf("\n Employee name is : %s",e1.empname);
	printf("\n Employee number is : %d",e1.empno);
	printf("\n employee salary is : %f",e1.salary);
	printf("\n employee designation is : %s",e1.designation);
	
	getch();
	
	
}
