#include<stdio.h>

enum days{mon=1,tue,wed,thur,fri,sat,sun};

int main()
{
	enum days d;
	d=thur;
	
	switch(d)
{
	case mon:
		printf("it is monday");
		break;
		
	case tue:
		printf("it is tuesday");
		break;
		
	case wed:
		printf("it is wednesday");
		break;
		
	case thur:
		printf("it is thursday");
		break;
		
	case fri:
		printf("it is friday");
		break;
		
	case sat:
		printf("it is saturday");
		break;
		
	case sun:
		printf("it is sunday");
		break;
		
}


}
