

#include<stdio.h>
void main()
{
	int i,n,sign=1;
	
	printf("\nEnter the nth term");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i=i+2)
	{
		printf("%d ",i*sign);
		sign=sign*(-1);
	}
	getch();
}

