#include<stdio.h>

enum acctype{saving,current,loan};
int main()

{
	enum acctype a;
	
	a=current;
	
	printf("\n Account type : %d",a);
	
}
