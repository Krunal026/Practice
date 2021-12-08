#include<stdio.h>
void main()
{
int s;
clrscr();
printf("Enter the integer");
scanf("%d",&s);
if(s<0 || s>80);
{
printf("Error");
}
if(s>0 && s<=20)
{
printf("Range 0 to 20");
}
else
if(s>21 && s<=40)
{
printf("Range 21 to 40");
}
else
if(s>41 && s<=60)
{
printf("Range 41 to 60");
}
else
if(s>61 && s<=80)
{
printf("Range 61 to 80");
}
getch();
}