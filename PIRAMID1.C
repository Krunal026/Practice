

#include <stdio.h>
void main ()
{
int h,sp,sr;
clrscr();
for(h=1;h<=4;h++)
{
for(sp=0;sp<=40-h;sp++)
{
printf(" ");
}
for(sr=1;sr<=h;sr++)
{
printf(" %d",sr);
}
printf("\n");
}

getch();
}