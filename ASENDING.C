//wap to to check two numbers in a pair is in asending order or decending order.


#include <stdio.h>
void main ()
{
int n1,n2;
clrscr();
printf("Enter two numbers");
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
printf("Entered number is in decending order");
}
else
{
printf("Entered number is in asending order");
}
getch();
}