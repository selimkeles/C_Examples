#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char a;
	int i;
	char string1[20],string2[20];
	printf("please enter a sentence:");
	gets(string1);
	
	for(i=0; i<20 ;i++){
		if(islower(string1[i])==0)
		string2[i]=tolower(string1[i]);
		else
		string2[i]=toupper(string1[i]);
	}
	puts("Result is:");
	puts(string2);

	
	
	return 0;
}

