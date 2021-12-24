//Below is a program to find sum of digits of a given number using recursion.

#include<stdio.h>
#include<conio.h>

int addofd(n);

int main()
{
	int n,sum;
	printf("Enter any number");
	scanf("%d",&n);
	
	sum=addofd(n);
	
	printf("Sum of digits is :%d",sum);
	
}

int addofd(n)
{
	static int s, a;				//num=1234
	    
    s = s + (n%10);	//	0+(1234%10)=4  4+3=7	7+2=9  9+1=10
    a = n/10;		//1234/10= 123  12 1	0
    
    if(a > 0)			
    {
        addofd(a);
    }
    return s;

}
