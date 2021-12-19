#include<stdio.h>
void main()
{
	char name1[10][30];
	int i;
	
	for(i=0; i<10; i++)
	{	printf("\n Enter name :");
		gets(name1[i]);

	}
	printf("You have entered the following names");
	for(i=0;i<10;i++)
	printf("\n %s", name1[i]);
	getch();
	}

