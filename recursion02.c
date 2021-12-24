//Below is a program to print the fibonacci series using recursion.

#include<stdio.h>
void febo(int);

int main()
{
	int n;
	
	printf("Enter the length of fibonacci series");
	scanf("%d",&n);
	
	printf("the first %d terms of fibonacci series are : \n\n\n ",n);
	printf("%d",1);
	
	febo(n);
}

void febo(int n)
{
	static long int first=0 , second=1 , sum;
	
	if(n>1)
	{
		sum=first+second;
		
		first = second;
		
		second = sum;
		
		printf("%ld ", sum);
		
		febo(n-1);
		
	}
	
	else
	{
		printf("\n\n\n\n");
		
	}
}
