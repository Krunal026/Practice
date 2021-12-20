//create a structure array of 3 elements of book structure
#include<stdio.h>
#include<string.h>

struct book
{
	int bookid;
	char title[15];
	
};

int main()
{
	struct book b1[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter book id");
		scanf("%d",&b1[i].bookid);
		printf("Enter book title");
		scanf("%s",&b1[i].title);
		
	}
	
	printf("\n \n -----DETAILS OF THREE BOOKS ARE-----");
	
	for(i=0;i<3;i++)
	{
		
	printf(" \n Book id is : %d",b1[i].bookid);
	printf("\n Book Title is : %s",b1[i].title);
	
	printf("\n ---------------------------");
	
}

getch();
}
