//1- create a structure product having members prodid,prodname, price

#include<stdio.h>
#include<string.h>

struct product
{
	int prodid;
	char prodname[20];
	float price;
}p1;

int main()
{
	p1.prodid=12345;
	strcpy(p1.prodname, "krunal bhau");
	p1.price=500.00f;
	
	
	printf(" \n Product id is : %d",p1.prodid);
	printf("\n Product name is : %s",p1.prodname);
	printf("\n Product price is : %f",p1.price);
	
	getch();
	
}
