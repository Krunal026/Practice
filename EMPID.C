#include<stdio.h>
void main()
{
int emp,hr,amt;
float s;
clrscr();
printf("Enter emlpyers id,  total work hours and the amount he received per hour");
scanf("%d%d%d",&emp,&hr,&amt);
s=hr*amt;
printf("Employers id is = %d",emp);
printf("Salary he received per month = %f",s);
getch();
}