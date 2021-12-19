//compare string

#include<string.h>
void main()
{
	int i;
	char s1[30],s2[30];
	
	printf("\nEnter a string");
	gets(s1);							//12345
	printf("\nEnter 2nd string");
	gets(s2);							//67891
	i=stricmp(s1,s2);

	if(i==0)
		printf("\n the strings are same");
	else if(i>0)
		printf("\n1st string is greater than 2nd");
	else
		printf("\n1st string is smaller than 2nd");
	getch();
}

