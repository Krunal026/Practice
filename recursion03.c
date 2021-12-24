//Program to find Sum of First N Numbers

#include<stdio.h>

int Sum(n);

int main()
{
	int n, sum;
	printf("enter the range of n");
	scanf("%d",&n);
	
	sum=Sum(n);
	
	printf(" sum of 1st %d number is : %d",n,sum);
	
	
}

int Sum(n)
{
	static int sum=0;
	
	if(n>0)
	{
		sum=sum+n;
		
		Sum(n-1);
		
	}
	return sum;
}
