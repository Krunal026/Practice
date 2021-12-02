//even numbers from 1 to 50

#include<stdio.h>
void main()
{
int n;
clrscr();
n=1;
while(n<=50)
{
if(n%2==0)
{
printf("%d",n);
}
n=n+1;
}
getch();
}