//wap to enter 5 array elements and perform the addition of sum of all elements.

#include<stdio.h>
void main()
{
int a[4],i,add=0;
clrscr();
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
add=add+a[i];
}
printf("%d",add);
getch();
}