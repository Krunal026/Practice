//create function without parameters amd not returning value...

#include<stdio.h>
void factorial()
{
int num,i=1,fact=1;
clrscr();
printf("\n Enter any number");
scanf("%d",&num);
while(i<=num)
{
fact=fact*i;

i++;
}
printf("\n The factorial of entered number is = %d",fact);
}
void main()
{
factorial();

getch();
}