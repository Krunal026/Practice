#include <stdio.h>
void main ()
{
int choice,n1,n2,res;
clrscr();
printf(" Press 1 for addition ");
printf(" press 2 for substraction ");
printf(" press 3 for multiplication ");
printf(" press 4 for division ");
scanf("%d",&choice);
if(choice==1)
{
printf(" Enter two numbers for addition ");
scanf("%d%d",&n1,&n2);
res=n1+n2;
printf( " Addition is = %d", res);
}
else
if(choice==2)
{
printf(" Enter two numbers for substraction");
scanf("%d%d",&n1,&n2);
res=n1-n2;
printf(" Substraction is = %d", res);
}
else
if(choice==3)
{
printf(" Enter two numbers for Multiplication");
scanf("%d%d",&n1,&n2);
res=n1*n2;
printf("Multiplication is = %d",res);
}
else
if(choice==4)
{
printf(" Enter two numbers for division ");
scanf("%d%d",&n1,&n2);
printf("%d",res);
}
else
{
printf(" Enterd number is false ");
}
getch();
}