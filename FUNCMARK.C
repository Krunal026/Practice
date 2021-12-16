//create a function result with 3 int parameters to accept 3 subject marks, calculate and display total, percentage and grade


#include <stdio.h>
void result(int sub1,int sub2,int sub3)
{
int total;
float per;
clrscr();
total=sub1+sub2+sub3;
printf("\n Total marks = %d",total);
per=(float)(total/300.0f)*100.0f;
printf("\n Percentage = %f",per);
if(per>=75)
{
printf("\n Grade : Distinction");
}
else
if(per>=60 && per<75)
{
printf("\n Grade : First");
}
else
{
printf("\n Grade : Fail");
}
}
void main()
{
int marks1,marks2,marks3;
printf("Enter 3 subjects marks");
scanf("%d%d%d",&marks1,&marks2,&marks3);
result(marks1,marks2,marks3);
getch();
}

