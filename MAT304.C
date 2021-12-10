#include<stdio.h>
void main()
{
int h,sp,n;
clrscr();
for(h=5;h>=1;h--)
{
for(sp=0;sp<=40-h;sp++)
{
printf(" ");
}
for(n=1;n<=h;n++)
{
printf("%d",n);
}
printf("\n");
}
getch();
}