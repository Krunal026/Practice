//STRUCTURE BOOK

#include<stdio.h>


struct book
{
	int bookid;
	char title[15];
	float price;
}b1;

int main()
{
	b1.bookid=123;
	strcpy(b1.title,"Shaymchi aai");
	b1.price=256.34f;
	
	
	printf("\n Book id : %d",b1.bookid);
	printf("\n Book Title is : %s",b1.title);
	printf("\n Book price is : %f",b1.price);
	
	
}
