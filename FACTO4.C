//create function with parameters amd non  returning value...

#include<stdio.h>
void factorial(int num)
{
int i=1,fact=1;
clrscr();

while(i<=num)
{
fact=fact*i;

i++;
}
printf("\n Factorial of entred is = %d", fact);
}

int main()
{
int num;
printf("\n Enter any number ");
scanf("%d",&num);

factorial(num);
getch();
}