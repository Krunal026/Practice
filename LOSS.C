#include<stdio.h>
void main()
{
int l,cp,sp;
clrscr();
printf("Enter the value of cost price and selling price");
scanf("%d%d",&cp,&sp);
l=cp-sp;
printf(" Loss is =%d",l);
getch();
}