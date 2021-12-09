#include<stdio.h>
void main()
{
char r,c,a='E';
clrscr();
for(r='E';r>='A';r--)
{
for(c='E'; c>='A'; c--)
{
printf(" %c",c);
}
printf("\n");
}
getch();
}