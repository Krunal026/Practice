#include<stdio.h>

enum grade{A=20, B=50, C=40};
int main()
{
	enum grade g;
	
	g=B;
	
	printf("\n Marks obtained is : %d",g);
}
