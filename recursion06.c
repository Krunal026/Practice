//C Program to calculate a Number raised to the Power of N using Recursion

#include<stdio.h>

int power();

int main()
{
	int b,e;
	
	printf("enter base number");
	scanf("%d",&b);								//4
	printf("enter power number");
	scanf("%d",&e);								//3
	
	printf("%d raised to the power %d is : %d",b,e,power(b,e));
	
	
}

int power (b,e)
{
	if(e==0)
	return 1;
	
	    return (b*power(b, e-1));	// (4*power(4,2))  (4*power(4,1))
}
