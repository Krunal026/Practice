//creating an array to store 5 subjects marks and sum of them.

#include <stdio.h>
void main ()
{
int marks[5]={22,33,44,55,66};
int i;
int sum=0;

for(i=0;i<5;i++)
{
sum=sum+marks[i];
}
printf("\n Sum of marks = %d",sum);
getch();
}
