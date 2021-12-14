//creating an array of 5 elements, accept 5 subjects marks
//and store it in an array, then display it

#include<stdio.h>
void main()
{
int marks[5];
int sum=0;
int i;
clrscr();
for(i=0;i<5;i++);
{
sum=sum+marks[i];
printf("Enter the marks of subjects");
scanf("%d",&marks[i]);

}
printf("Total marks =%d",sum);
getch();
}