#include<stdio.h>
void main()
{
int v,r,h;
clrscr();
printf("Enter the value of radius and height");
scanf("%d%d",&r,&h);
v=0.333*3.142*r*r*h;
printf("The volume of cone is = %d", v);
getch();
}