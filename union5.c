#include<stdio.h>


union employee
{
	int code;
	char name[20];
	
}e1;

int main()
{
	printf("\n Enter the name of employee and code");
	scanf("%s%d",&e1.name,&e1.code);
	printf("\nCode=%d \nName=%s",e1.code,e1.name);

	



}
