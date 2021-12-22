// full namee of employeee

#include<stdio.h>

int main()
{

struct name
{
	char fname[20];
	char mname[20];
	char lname[20];
};

struct employee
{
	int code;
	struct name ename;
	float sal;
}e,e1;

printf(" \n Enter employee code");
scanf("%d",&e.code);
printf("\n Enter first name middle name and last name");
scanf("%s%s%s",&e.ename.fname,&e.ename.mname,&e.ename.lname);
printf("\n Enter salary =");
scanf("%f",e.sal);

	e1.code=e.code;
	e1.ename=e.ename;
	e1.sal=e.sal;
	
	printf("\ncode =%d",e1.code);
	printf("\n%s %s %s",e1.ename.fname,e1.ename.mname,e1.ename.lname);
	printf("\n  salary =%f",e1.sal);
//	getch();

}


/*
#include<stdio.h>
int main()
{
	struct name
	{
		char fname[15];
		char mname[15];
		char lname[15];
	};
	struct employee
	{	int code;
		struct name ename;
		float sal;
	}e,e1;
//	clrscr();
	printf("\nEnter employee code");
	scanf("%d",&e.code);
	printf("\nEnter first,middle,last name:    ");
	scanf("%s%s%s",e.ename.fname,e.ename.mname,e.ename.lname);
	printf("\nEnter salary=   ");
	scanf("%f",&e.sal);
	e1.code=e.code;
	e1.ename=e.ename;
	e1.sal=e.sal;
	printf("\ncode =%d",e1.code);
	printf("\n%s %s %s",e1.ename.fname,e1.ename.mname,e1.ename.lname);
	printf("\n  salary =%f",e1.sal);
//	getch();
}
*/
