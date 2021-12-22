//structure as a function

#include<stdio.h>

struct employee
{
	int empno;
	char name[20];
	
	
}e1,e2;

void printemployee(struct employee e1);
int main()
{
	e1.empno=123;
	strcpy(e1.name,"Krunal");
	
//	printemployee(e1);
	
	e2.empno=456;
	strcpy(e2.name,"Vivek");
	
	printemployee(e1);
	
}

void printemployee(struct employee e1)
{
	printf("\n employee details are");
	printf("\n Employee number is : %d",e1.empno);
	printf("\n Employee name is : %s",e1.name);
	
	printf("\n Employee number is : %d",e2.empno);
	printf("\n Employee name is : %s",e2.name);
	
	getch();
	
}
