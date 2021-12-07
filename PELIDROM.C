#include <stdio.h>
void main ()
{
int num,s,d1,n1;
clrscr();
printf("Enter n digit number");
scanf("%d",&num);
n1=num;
s=0;
while(num>0)
{
d1=num%10;
s=s*10+d1;
num=num/10;

}
if(n1==s)
{
printf("The num is a pelidrome");
}
else
{
printf("The number is not pelidrome");
}
getch();
}
