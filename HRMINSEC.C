#include<stdio.h>
void main()
{
int a,b,hours,min,sec;
clrscr();
printf("Enter the seconds");
scanf("%d",&a);
b=a/60;
hours=b/60;
min=b-60;
sec=a-((hours*3600)+(min*60));
printf("hours = %d",hours);
printf("\nmin = %d",min);
printf("\nsec = %d",sec);		

getch();
}