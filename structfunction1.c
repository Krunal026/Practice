//structure as a function

#include<stdio.h>

struct employee
{
	int empno;
	char name[20];
	
	
}e1;

void printemployee(struct employee e1);
int main()
{
	e1.empno=123;
	strcpy(e1.name,"Krunal");
	
	printemployee(e1);
	
}

void printemployee(struct employee e1)
{
	printf("\n employee details are");
	printf("\n Employee number is : %d",e1.empno);
	printf("\n Employee name is : %s",e1.name);
	
	getch();
	
}
