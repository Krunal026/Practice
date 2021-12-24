//Program to find Palindrome using Recursion

#include<stdio.h>

int palidrome(n);

void main()
{
	int n, pal;
	printf("Enter the number to check it is palidrome or not");
	scanf("%d",&n);
	
	pal=palidrome(n);
	
	if(palidrome == 1)
	{
	
        printf("\n\n\n%d is palindrome\n\n", n);
    }
    else
    {
	
        printf("\n\n\n%d is not palindrome\n\n", n);
    }

    
}

int palidrome(n)
{
	static int sum=0;
	
	if(n!=0)
	{
		sum=sum*10+n%10;	//
		palidrome(n/10);	//
	}
	else
	if(sum==0)
	return 1;
	
	else
	return 0;
	
	
}
