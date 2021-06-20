#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char name[20],surname[20],id[20],temp[6],rev[3];
	puts("Please enter your name:");
	gets(name);
	puts("\nPlease enter your surname:");
	gets(surname);
	puts("\nPlease enter your ID:");
	gets(id);
	
	strncpy(temp,name,1);
	strncat(temp,surname,2);
	
	strrev(id);
	strncpy(rev,id,3);
	strrev(rev);
	
	strcat(temp,rev);
	puts(temp);
	return 0;
}

