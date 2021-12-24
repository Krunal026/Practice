//Program to print the Largest and Smallest using Global Declaration

#include<stdio.h>

int main()
{
	int a,b;
	
	printf("\n Enter the two numbers to find out gretest and smallest number");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("\n The largest number is : %d",a);
		printf("\n The smallest number is : %d",b);
		
	}
	
	else
	{
		
		printf("\n The largest number is : %d",b);
		printf("\n The smallest number is : %d",a);
		
	}
	
}
