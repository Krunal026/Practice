#include<stdio.h>
void main ()
{
int a,b1,b2,h;
printf("Enter the values of base1 , base2 and height ");
scanf("%d%d%d",&b1,&b2,&h);
a=0.5*(b1+b2)*h;
printf("Area oftrapezoid is =%d", a);
getch();
}