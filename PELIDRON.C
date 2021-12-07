#include<stdio.h>
void main()
{
int n,rev,ori,n1;
clrscr();
printf("Enter any number");
scanf("%d",&n);
ori=n;
while(n>0)
{
rev=n%10;
n1=n*10+rev;
rev=rev/10;
}
if(ori==rev)
{
printf("It is pelidrome number");
}
else
{
printf("It is not pelidrome number" );
}
getch();
}
