//structure enter values from user

#include<stdio.h>

struct book
{
	int bookid;
	char title [20];
	float price;
	
};

int main()
{
	struct book b1;
	
	printf("\n Enter book id ");
	scanf("%d",&b1.bookid);
	printf("\n Enter Book title ");
	scanf("%s",&b1.title);
	printf("\n Enter Book price");
	scanf("%f",&b1.price);
	


printf("-----BOOK DETAILS ARE-----");

printf(" \n Book id is : %d",b1.bookid);
printf(" \n Book Title is : %s",b1.title);
printf( " \n Book price is : %f",b1.price);

getch();

}
