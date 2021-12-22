#include<stdio.h>

int main()
{       union employee
	{	int code;
		char name[20];
	}e;
//	clrscr();
	printf("\nEnter code");
	scanf("%d",&e.code);
	printf("\nCode=%d",e.code);
	printf("\nEnter name");
	scanf("%s",e.name);
	printf("\nName=%s",e.name);
	printf("\nCode=%d",e.code);
//	getch();
}


