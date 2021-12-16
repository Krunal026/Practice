//circle circumference, are and volume

#include <stdio.h>
void circle(float r);
void main()
{
float r;
clrscr();
printf("\n Enter radius");
scanf("%f",&r);
circle(r);
}
void circle(float r)
{
float c,a,v;
c=2*3.14*r;
a=3.14*r*r;
v=4/3.0*3.14*r*r*r;

printf("\n Circumference of circle is = %.2f",c);
printf("\n Area of circle = %.2f",a);
printf("\n Volume of circle = %.2f",v);

getch();

}