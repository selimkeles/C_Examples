#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {	
	char str1[161];
	int flag=0;
	
	scanf("%160[^\n]",str1);
	char *p1=str1;
	char *p2=strstr(p1,"re");
	while(p2 != NULL){
	
		++flag;
		p1=p2+2;
		p2=strstr(p1,"re");
	}
	printf("%d",flag);
	
return 0;
}
