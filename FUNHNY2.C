//happy new year

#include<stdio.h>
void line(int,char);
void main()
{
printf("\n\t\t HAPPY NEW YEAR ");
line(14,'*');
printf("\n\t\t HAPPY ");
line(5,'&');
printf("\n\t\tNEW");
line(3,'$');
printf("\n\t\tYEAR");
line(4,'@');

}
void line(int n, char c)
{
int i;
printf("\n\t\t");
for(i=1;i<=n;i++)
printf("%c",c);
getch();
}