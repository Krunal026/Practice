#include<stdio.h>
void main()
{
char r,c,a='A';
clrscr();
for(r='A';r<='E';r++)
{
for(c='E';c>=r;c--)
{
printf("%c",c);
}
printf("\n");
}
getch();
}