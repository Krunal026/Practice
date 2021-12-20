//STRUCTURE BOOK

#include<stdio.h>
#include<string.h>
struct book
{
	int bookid;
	char title[15];
	float price;
};

void main()
{
	struct book b1, b2;
	
	b1.bookid=123;
	strcpy(b1.title,"Mahabharat");
	b1.price=256.34f;
	
	printf("\n Book id : %d",b1.bookid);
	printf("\n Book Title is : %s",b1.title);
	printf("\n Book price is : %f",b1.price);
	
	
	
	
	b2.bookid=456;
	strcpy(b2.title,"Ramayannn");
	b2.price=256.34f;
	
	printf("\n Book id : %d",b2.bookid);
	printf("\n Book Title is : %s",b2.title);
	printf("\n Book price is : %f",b2.price);
	
	
}
