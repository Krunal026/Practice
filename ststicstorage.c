//example of ststic storage0


#include <stdio.h>


int main() {
int i;
for(i=1;i<=3;i++) {
	static int num1=5;
	int num2=10;
	num1++; // 7
	num2++; //11
	printf("\n value of static variable num1 =%d",num1); //6
	printf("\n value of non static variable num2=%d",num2); //11
}

}

