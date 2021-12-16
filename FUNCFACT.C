//create a function factorial with one int parameter to accept number to calculate and
//display the factorial of number

#include<stdio.h>
void factorial()
{
int num,fact=1,i=1;
clrscr();
printf("\n Enter any number");
scanf("%d",&num);
while(i<=num)
{
fact=fact*i;

i++;
}
printf("\n Factorial of entered number is = %d",fact);
}
void main()
{
printf("\n Calling function factorial from main function");
factorial();

getch();
}

	