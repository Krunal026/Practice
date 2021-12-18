//to find reverse no. of 4 digit number...

#include<stdio.h>
void main()
{
	int num,num1,rev=0,rem;
	printf(" Enter any digit number");
	scanf("%d",&num);
	
	num1=num;
	
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	
	printf(" Reverse number of %d is %d ", num1,rev);
	
	getch();
	
	
	
}
