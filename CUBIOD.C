#include<stdio.h>
void main()
{
int l,w,h,v;
clrscr();
printf("Enter the value of length");
scanf("%d",&l);
printf("Enter the value of width");
scanf("%d",&w);
printf("Enter the value of Height");
scanf("%d",&h);
v=l*w*h;
printf("Volume of cuboid is = %d", v);
getch();
