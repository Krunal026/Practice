// to find reverse number of any number

#include<stdio.h>
void main()

{
	long int num, num1, rev=0, rem=0;
	printf(" Enter Any number");
	scanf("%ld",&num);
	
	
	
	for(num1=num;num1>0;)
	{
		rem=num1%10;					//5			4			3		2		1
		rev=rev*10+rem;					//5			54			543		5432	54321
		num1=num1/10;					//1234		123			12		1		0
	}
	
	printf("Reverse number of %ld is %ld", num,rev);
	
	getch();
	
}

