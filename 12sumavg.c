//average of ten numbers

#include<stdio.h>
void main()
{
	int i,n,s=0;
	float avg;
	
	for(i=1;i<=10;i++)
	{
		printf("\n Enter any number ");
		scanf("%d",&n);
		
		s=s+n;
		
	}
	avg=s/10.0;
	printf("\n sum of ten numbers is = %d ", s);
	printf("\n and average of ten numbers is = %f", avg);
	
	getch();
	
}
