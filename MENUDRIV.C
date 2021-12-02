#include <stdio.h>
void main ()
{
int choice,n1,n2,res;
clrscr();
printf("Enter 1 for addition\n  Enter 2 for substraction\n  Enter 3 fron multiplication\n  Enter 4 for division\n);
printf(" Enter your choice ");
scanf("%d",&choice);
if(choice==1)
{
res=n1+n2;
printf("Addition is = %d",res);
}
else
if(choice==2)
{
res=n1-n2;
printf("Substraction is = %d",res);
}
else
if(choice==3)
{
res=n1*n2;
printf("Multiplication is = %d",res);
}
else
if(choice==4)
{
res=n2/n1;
printf("Division is = %d", res);
}
else
{
printf("Incorrect menu selected");
}
getch();
}