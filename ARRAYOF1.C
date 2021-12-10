//wap to display 10 array element & display in a reverse order.
#include<stdio.h>
void main()
{
int a[9],i;
clrscr();
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=9;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}