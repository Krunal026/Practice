#include<stdio.h>
void main()
{
int x,y;
clrscr();
printf("Enter x and y coordinates");
scanf("%d%d",&x,&y);
if(x>0 && y>0)
{
printf("Co-ordinates belongs to 1st quadrant");
}
else
if(x<0 && y<0)
{
printf("Co-ordinates belongs to 3th quadrant");
}
else
if(x>0 && y<0)
{
printf("Co-ordinates belongs to 4th quadrant");
}
else
{
printf("Co-ordinates belongs to 2nd quadrant");
}
getch();
}