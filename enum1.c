#include<stdio.h>
enum weekdays{sun=1,mon,tue,wed,thur,fri,sat};

int main()
{
	enum weekdays w;
	
	w=tue;
	
	printf("the value of w is : %d",w);
	
}
