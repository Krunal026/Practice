/* example using structure to interchange data from one to another*/

#include<stdio.h>
struct product
{
	int prodid;
	char name[20];
	float price;
	
}p1,p2,temp;

int main()
{
	printf("\n Enter product name , id and price for product one");
	scanf("%s%d%f",&p1.name,&p1.prodid,&p1.price);
	
	printf("\n Enter product name , id and price for product two");
	scanf("%s%d%f",&p2.name,&p2.prodid,&p2.price);
	
	printf("-----BEFORE INTERCHANGE-----");
	
	printf("\n Product 1 name : %s \n Product 1 id : %d \n Product 1 price : %f",p1.name,p1.prodid,p1.price);
	
	printf("\n");
	
	printf("\n Product 2 name : %s \n Product 2 id : %d \n Product 2 price : %f",p2.name,p2.prodid,p2.price);
	
	temp=p1;
	p1=p2;
	p2=temp;
	
	
	printf("\n Product 1 name : %s \n Product 1 id : %d \n Product 1 price : %f",p1.name,p1.prodid,p1.price);
	
	printf("\n");
	
	printf("\n Product 2 name : %s \n Product 2 id : %d \n Product 2 price : %f",p2.name,p2.prodid,p2.price);
	
	
	getch();
	
	
	
}

