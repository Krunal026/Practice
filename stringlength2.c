#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	int len;
	puts("enter your name");
	gets(name);
	len=strlen(name);
	printf("length of string is %d",len);
}
