//example of character echo to the screen

#include<stdio.h>

void main()
{
	char ch;
	printf("Enter any alphabet");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("\nYour alphabet is a vowel");
			break;
		default:
			printf("\nYour alphabet is a consonent");
	}
	
	getch();
	
}

