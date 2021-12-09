#include<stdio.h>
void main()
{
char r,c,a='A';
clrscr();
for(r='A';r<='E';r++)
{
for(c='A'; c<='E'; c++)
{
printf(" %c",c);
}
printf("\n");
}
getch();
}