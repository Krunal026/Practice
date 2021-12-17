#include<stdio.h>
int main()

{
	char name[10]="mummy";
	char name1[10]="mummy";
	
	//if(name==name1)
	int res= strcmp(name,name1,3);
	
	if(res==0)
	
	{
		printf("Strings are equal");
	}
	
	else
	{
		printf("Strings are not equal");
		
	}
}
