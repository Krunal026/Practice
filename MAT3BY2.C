//3 rows and t colomns  to accept roll number and marks from the user.

#include<stdio.h>
void main()
{
int arr[3][2];
int row,col;
clrscr();
for(row=0;row<3;row++)
{
for(col=0;col<2;col++)
{
printf("Enter Roll number and marks");
scanf("%d",&arr[row][col]);
}
}
printf("\n Roll number and marks of 3 students are \n");
for(row=0;row<3;row++)
{
for(col=0;col<2;col++)
{
printf("%d\t",arr[row][col]);
}
printf("\n");
}
getch();
}