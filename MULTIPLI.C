#include<stdio.h>
void main()
{
int n1,n2;
printf("Enter two numbers");
scanf("%d%d",&n1,&n2);
if(n1%n2==0)
{
printf(" It is multiplied", n1,n2);
}
else
{
printf("It is not multiplied",n1,n2);
}
getch();
}