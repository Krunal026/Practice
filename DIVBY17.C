//wap to calc the sum of all number not divisible by 17 between two given integer.

#include<stdio.h>
void main()
{
int n1,n2,i,add=0;
clrscr();
printf("Enter any two numbers");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
if((i%17)!=0)
{
add=add+1;
}
printf("addition of numbers non divisible by 17 in between %d and %d is = %d", n1,n2,add);
getch();
}
