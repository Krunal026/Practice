//wap to read 5 numbers and count the number of positive numbers and negative numbers


#include <stdio.h>
void main ()
{
int n1,n2,n3,n4,n5,p,n,pcount=0,ncount=0;
printf("Enter any number");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
if(n1>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
if(n2>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
if(n3>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
if(n4>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
if(n5>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
printf("positive numbers = %d",pcount);
printf("negative numbers = %d",ncount);
getch();
}


