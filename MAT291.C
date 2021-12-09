#include<stdio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=5;r++)
{
for(c=5;c>=r;c--)
{
printf("%d",r);
}
printf("\n");
}
getch();
}
