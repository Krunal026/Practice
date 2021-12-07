
//34) wap that reads 2 numbers and divide the 1st number by 2nd number.
//if division is not possible  print division not possible

#include<stdio.h>
void main()
{
int n1,n2,div;
clrscr();
printf("Enter any two numbers");
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
div= n1/n2;
printf("Division is = %d",div);
}
else
{
printf("Division is not possible");
}
getch();
}
