//create function with parameters amd  returning value...

#include<stdio.h>
int factorial(int num)
{
int i=1,fact=1;
clrscr();

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
int num;
printf("\n Enter any number ");
scanf("%d",&num);
res= factorial(num);
printf("\n Factorial of entred number is = %d", res);
getch();
}