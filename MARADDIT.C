//wap to to do addition of two matrix.

#include <stdio.h>
void main ()
{
int arr1[2][2]={{1,2},{3,4}};
int arr2[2][2]={{5,6},{7,8}};
int arr3[2][2];
int row,col;
clrscr();
for(row=0;row<2;row++)
{
for(col=0;col<2;col++)
{
arr3[row][col]=arr1[row][col] + arr2[row][col];
}
}
printf("\n Result of Addition of matrix is \n");
for(row=0;row<2;row++)
{
for(col=0;col<2;col++)
{
printf("%d\t",arr3[row][col]);
}
}
printf("\n");
getch();
}