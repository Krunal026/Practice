//2- repeat the above program accepting values from the user...

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
	printf("Enter product id");
	scanf("%d",&p1.prodid);
	printf("Enter product name");
	scanf("%s",&p1.prodname);
	printf("Enter Price of Product");
	scanf("%f",&p1.price);
	
	
	printf(" \n Product id is : %d",p1.prodid);
	printf("\n Product name is : %s",p1.prodname);
	printf("\n Product price is : %f",p1.price);
	
	getch();
	
}
