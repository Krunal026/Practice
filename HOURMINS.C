#include<stdio.h>
void main()
{
int sec,h,m,s;
clrscr();
printf("Enter seconds");
scanf("%d",&sec);
h=(sec/3600);
m=(sec-(3600*h))/60;
s=(sec-(3600*h)-(m*60));
printf("hours,minuts,seconds %d%d%d",h,m,s);
getch();
}