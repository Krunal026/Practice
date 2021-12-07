//wap to read 5 numbers and count the number and average of all the positive number.

#include <stdio.h>
void main ()
{
int n1,n2,n3,n4,n5,pcount=0,avg,ncount=0,add=0;
clrscr();
printf("Enter 5 numbers");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
if(n1>0)
{
pcount=pcount+1;
add=add+n1;
}
else
{
ncount=ncount+1;
}
if(n2>0)
{
pcount=pcount+1;
add=add+n2;
}
else
{
ncount=ncount+1;
}
if(n3>0)
{
pcount=pcount+1;
add=add+n3;
}
else
{
ncount=ncount+1;
}
if(n4>0)
{
pcount=pcount+1;
add=add+n4;
}
else
{
ncount=ncount+1;
}
if(n5>0)
{
pcount=pcount+1;
add=add+n5;
}
else
{
ncount=ncount+1;
}
avg=add/pcount;

printf("Average of posotive numbers is = %d",avg);
getch();
}