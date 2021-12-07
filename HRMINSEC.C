#include<stdio.h>
void main()
{
int a,b,hours,min,sec;
clrscr();
printf("Enter the seconds");
scanf("%d",&a);
b=a/60;                                 //5000/60   = 83.333333
hours=b/60;                            // 83.33/60  = 1.38
min=b-60;                               //83.33-60  = 23.33
sec=a-((hours*3600)+(min*60));        //5000-((1.38*3600)+(23.33*60))
printf("hours = %d",hours);
printf("min = %d",min);
printf("nsec = %d",sec);

getch();
}