#include<string.h>
void main()
{
	char fname[15],lname[15],name[3];

	printf("\ Enter first name");
	gets(fname);								//krunal
	printf("\ Enter last name");
	gets(lname);								//jibhkate

	strcpy(name,fname);							//name = krunal
	strcat(name," ");							//name = (space)
	strcat(name,lname);							//name = jibhkate
	printf("\nYour full name is %s",name);		// krunal jibhkate
    //	printf("\nlength is %d",strlen(name));
	getch();
}
