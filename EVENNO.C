// 1 to 20 even number

#include<stdio.h>
void main()
{
int n;
clrscr();
n=1;
while(n<=20)
{
if(n%2==0)
{
printf("%d",n);
}
n=n+1;
}
getch();
}