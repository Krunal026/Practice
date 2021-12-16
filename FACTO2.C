//create function without parameters amd not returning value...

#include<stdio.h>
int factorial()
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
return fact;
}

int main()
{
int res;
res= factorial();
printf("\n Factorial of entred number is = %d", res);
getch();
}