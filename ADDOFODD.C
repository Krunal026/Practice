#include <stdio.h>
void main ()
{
int n1,n2,n3,n4,n5,total=0;
clrscr();
printf("Add number 1");
scanf("%d",&n1);
printf("Add number 2");
scanf("%d",&n2);
printf("Add number 3");
scanf("%d",&n3);
printf("Add number 4");
scanf("%d",&n4);
printf("Add number 5");            // 5 2 7 1 6
scanf("%d",&n5);
if(n1%2!=0)
{
total=total+n1;	// 5
}
if(n2%2!=0)
{
total=total+n2;             //f
}
if(n3%2!=0)
{
total=total+n3;                //12
}
if(n4%2!=0)
{
total=total+n4;                    //13
}
if(n5%2!=0)
{
total=total+n5;                        //f
}

printf("Addition of odd numbers");

printf("%d",total);
getch();
}

