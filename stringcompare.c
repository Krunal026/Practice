#include<stdio.h>
int main()

{
	char name[10]="krunal";
	char name1[10]="krunal";
	
	//if(name==name1)
	int res= strcmp(name,name1);
	
	if(res==0)
	
	{
		printf("Strings are equal");
	}
	
	else
	{
		printf("Strings are not equal");
		
	}
}
