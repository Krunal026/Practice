//to calculate male percentage and female percentage

#include<stdio.h>
void main()
{
	int m,f,total;
	float mp,fp;
	
	printf("\n Enter Total males and femals");
	scanf("%d%d",&m,&f);
	
	total=m+f;
	
	printf("\n Total number of males and females are : %d ", total);
	
	mp=m*100/total;
	fp=f*100/total;
	
	printf(" \n Male percentage : %.2f", mp);
	printf(" \nFemale percentage : %.2f", fp);
	
	getch();	
}
