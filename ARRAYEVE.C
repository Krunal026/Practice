//wap to enter array of 10 element and count the even and odd 	element

#include<stdio.h>
void main()
{
int a[10],i,ec=0,oc=0;
clrscr();
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
if(a[i]%2==0)
ec++;
else
oc++;
}
printf("\nTotal even no=%d",ec);
printf("\nTotal off n0=%d",oc);
getch();
}