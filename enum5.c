#include<stdio.h>
enum month{jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec};
int main()
{
	int i;
	
	for(i=jan;i<=dec;i++)
	{
		printf("\n %d", i);
	}
}

