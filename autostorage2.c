
//example of auto storage class

#include <stdio.h> 
void displaynum();
int main() {

	int i;
	for (i=1;i<=5;i++) {
	auto	int j=1;
		printf("\n j=%d",j);
	}
// printf("\n value of j outside loop =%d",j); // error since j is declared inside for block
}
void displaynum()
{
//printf("\n num1 = %d",num1); //error since num1 and num2 is declared auto 
//	printf("\n num2 = %d",num2);	
}
