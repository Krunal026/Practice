//divisible by 4 from 1 to 20

#include<stdio.h>
void main()
{
int n;
clrscr();
n=1;
while(n<=20)
{
if(n%4==0)
{
printf("%d",n);
}
n=n+1;
}
getch();
}		