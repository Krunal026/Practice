// simple intrest

#include<stdio.h>
void si(float,float,float);
void main()
{
float p,n,r;
clrscr();

printf("\n Enter P,N,R");
scanf("%f%f%f",&p,&n,&r);
si(p,n,r);
}
void si(float p,float n,float r)
{
float s;
s=(p*n*r)/100;

printf("The Si =%2f", s);
getch();
}