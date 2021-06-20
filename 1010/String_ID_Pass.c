#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char id[10], password[10];
	int i,a,b;
	puts("Enter your student id:");
	gets(id);
	puts("Enter your password:");
	gets(password);
	a=strlen(id);
	b=strlen(password);
	
	for(i=0; i<a ;i++){
		if(isdigit(id[i])==0){
			puts("Error student id cannot include any letter or password cannot include any digit.");
			return 0;
		}
	}
	for(i=0; i<b ;i++){
		if(isalpha(password[i])==0){
			puts("Error student id cannot include any letter or password cannot include any digit.");
			return 0;
		}
	}
	
	puts("-----RESULT-----\nStudent id:\t");
	puts(id);
	puts("Password:\t");
	puts(password);
	return 0;
}
