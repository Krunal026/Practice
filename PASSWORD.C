#include<stdio.h>
void main()
{
int cp=1234,pass;
clrscr();
printf("Enter the correct password");
scanf("%d",&pass);
if(cp==pass)
{
printf("Correct Password");
}
else
{
printf("Incorrect Password");
}
getch();
}