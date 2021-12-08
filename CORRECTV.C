#include <stdio.h>
void main ()
{
int p,q,r,s,s1,s2;
clrscr();
printf("Enter the value of p q r s");
scanf("%d%d%d%d",&p,&q,&r,&s);
if(q>r && s>p)
{
s1=r+s;
s2=p+q;

if(s1>s2)
{
printf("Correct value");
}
else
{
printf("Wrong value");
}
}
getch();
}
