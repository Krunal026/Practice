//wap to find and print the square of each one of the even values from 1 to specified value.

#include<stdio.h>
void main()
{
int n,s;
clrscr();
n=1;
while(n<=20)
{
if(n%2==0)
{
s=n*n;
printf("%d\n",s);
}
n=n+1;
}

getch();
}
