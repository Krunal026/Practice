//wap to to do addition of two 3x3 matrix.

#include <stdio.h>
void main ()
{
int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int arr3[3][3];
int row,col;
clrscr();
for(row=0;row<3;row++)
{
for(col=0;col<3;col++)
{
arr3[row][col]=arr1[row][col] * arr2[col][row];
}
}
printf("\n Result of Addition of matrix is \n");
for(row=0;row<3;row++)
{
for(col=0;col<3;col++)
{
printf("%d\t",arr3[row][col]);
}
}
printf("\n");
getch();
}