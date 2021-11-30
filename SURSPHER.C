#include<stdio.h>
void main()
{
int r,h,s;
clrscr();
printf("Enter the values of radius and height");
scanf("%d%d",&r,&h);
s=2*3.142*r*(r+h);
printf("Total surphase area of cylinder is = %d", s);
getch();
}