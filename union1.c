//create a union data with members num1 of int type , num2 of float type , ch of char type

#include<stdio.h>

union data
{
	int num1;
	float num2;
	char ch;
	
}d1;

int main()
{
	d1.num1=1234;
	printf(" \n Num1 is : %d", d1.num1);
	d1.num2=12.34;
	printf("\n Num2 is : %f",d1.num2);
	printf("\n num1 is : %d",d1.num1);
	d1.ch='a';
	printf("\n Character is : %c",d1.ch);
	printf("\n Num2 is : %f",d1.num2);
	printf("\n num1 is : %d",d1.num1);
}
