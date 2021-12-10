#include <stdio.h>
void main ()
{
char h,sp,sr,a='A';
clrscr();
for(h='A';h<='C';h++)
{
for(sp=0;sp<=100-h;sp++)
{
printf(" ");
}
for(sr='A';sr<=h;sr++)
{
printf("%c",h);
}
printf("\n");
}

getch();
}