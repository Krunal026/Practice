//Read & Write Strings in C using gets() and puts() functions

#include<stdio.h>
#include<string.h>

int main()
{
	char nickname[20];
	
	puts("Enter Your Name");
	
	gets(nickname);
	
	puts(nickname);
}
