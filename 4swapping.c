//swap no

#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf(" Enter two numbers to perform swapping operation");
	
	scanf("%d%d",&a,&b);
	
	c=a;
	d=b;
	a=d;
	b=c;
	
	printf("\n After SWapping %d%d", a,b);
	
}
