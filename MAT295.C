#include<stdio.h>
void main()
{
char r,c,a='A';
clrscr();
for(r='E';r>='A';r--)
{
for(c='A';c<=r;c++)
{
printf("%c",r);
}
printf("\n");
}
getch();
}
