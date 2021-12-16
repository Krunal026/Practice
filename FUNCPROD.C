// to multiply 2 numbers and return result

#include <stdio.h>
int mul(int x , int y);
int main()
{
int x,y,mul;
clrscr();
printf("\n Enter 2 number");
scanf("%d%d",&x,&y);
printf("\n Product of %d and %d is %d",x,y,mul(x,y));

}
int mul(int x, int y)
{
return x*y;
getch();

}