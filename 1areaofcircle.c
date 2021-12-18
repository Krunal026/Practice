//to calculate area and circumfurence of circle

#include<stdio.h>
void main()
{
	float c,a,r;

	printf(" \n Enter The radius");
	scanf("%f",&r);
	
	a=3.14*r*r;
	c=2*3.14*r;
	
	printf("Area of circle is : %f", a);
	printf("\n Circumference of circle is : %f", c);
	
	
	
	
}
