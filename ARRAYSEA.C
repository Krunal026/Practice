//wap to search an element in an array
#include<stdio.h>
void main()
{
int arr[5]={1,2,3,4,5};
int num;
int i;
clrscr();
printf("Enter any number");
scanf("%d",&num);
for(i=1;i<5;i++)
{
if(num==arr[i])
{
printf("Number found at position %d",i+1);
}

if(i==5)
{
printf("Number not found");
}
}
getch();
}

