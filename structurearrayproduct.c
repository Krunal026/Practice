//  7 -create a structure array  of 5 elements of product structure

#include<stdio.h>
#include<string.h>

struct product
{
	int prodid;
	char proname[20];
	float price;	
};

int main()
{
	struct product p1[5];
	
	int i;
	
	for(i=0;i<5;i++)
	{
	printf("Enter product id");
	scanf("%d",&p1[i].prodid);
	printf("Enter Product name");
	scanf("%s",&p1[i].proname);
	printf("Enter product price");
	scanf("%f",&p1[i].price);
	
	}
	
	printf("-----DETAILS OF PRODUCT-----");
	
	for(i=0;i<5;i++)
	{
		printf(" \n Product id is : %d",p1[i].prodid);
		printf("\n Product name is : %s",p1[i].proname);
		printf("\n Product price is : %f", p1[i].price);
		
		printf("---------------------------------------");
		
	}
	
	getch();
	
}
