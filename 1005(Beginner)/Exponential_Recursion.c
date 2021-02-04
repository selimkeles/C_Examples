#include <stdio.h>
#include <stdlib.h>

int baseexp(int a, int b);
int main(int argc, char *argv[]) {
	int a, b , c;
	printf("Enter a base and an exponent:		");
	scanf("%d %d", &a , &b);
	
	c=baseexp(a,b);
	printf("%d", c);


return 0;
}

int baseexp(int a, int b){
	if(b==1)
	return a;
	else
	return a*baseexp(a,b-1);
}
