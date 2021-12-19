
#include<stdio.h>
void main()

{

int num,i;
	
	printf("Enter a number");
	scanf("%d",&num);					//	7
	i=2;
	while(i<=num-1)						// 2<=6			3<=6
	{
		if(num%i==0)					// 7%2==0		7%3==0
		{
			printf(" Not a prime no");
			break;
		}
		i++;							// 3
	}
	if(i==num)
	printf("Prime number:");
	getch();
}

